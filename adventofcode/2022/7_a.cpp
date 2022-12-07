#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

struct file {
  string name;
  int size;

  file() {
    this->name = "";
    this->size = 0;
  }

  file(string name, int size) {
    this->name = name;
    this->size = size;
  }
};

struct dir {
  string name;
  dir* parent;
  vector<file*> files;
  vector<dir*> dirs;

  dir(string name) {
    this->name = name;
  }

  int size() {
    int sum = 0;

    for (auto it : files) {
      sum += it->size;
    }

    for (auto it : dirs) {
      sum += it->size();
    }

    return sum;
  }

  void print(int depth = 0) {
    for (int i = 0; i < depth; i++) {
      cout << "  ";
    }
    cout << name << " " << size() << endl;
    for (auto& it : files) {
      for (int i = 0; i < depth + 1; i++) {
        cout << "  ";
      }
      cout << it->name << " " << it->size << endl;
    }
    for (auto& it : dirs) {
      it->print(depth + 1);
    }
  }
};

int main() {
  FAST;

  dir root("/");
  dir* cwd = &root;

  vector<string> lines;

  string line;
  while (getline(cin, line)) {
    lines.push_back(line);
  }

  for (int i = 0; i < lines.size(); i++) {
    line = lines[i];

    if (line[0] == '$') {
      string cmd = line.substr(2);

      int cdPtr = cmd.find("cd");
      int lsPtr = cmd.find("ls");

      if (cdPtr != string::npos) {
        string val = cmd.substr(3);

        // cout << "$ cd to: " << val << endl;
        if (val == "/") {
          cwd = &root;
        } else if (val == "..") {
          cwd = cwd->parent;
        } else {
          bool found = false;
          for (auto it : cwd->dirs) {
            if (it->name == val) {
              cwd = it;
              found = true;
              break;
            }
          }

          if (found) continue;
          dir* newdir = new dir(val);
          newdir->parent = cwd;

          cwd->dirs.push_back(newdir);
          cwd = newdir;
        }
        // cout << "cwd: " << cwd->name << " (" << cwd->size() << ")" << endl;
      } else if (lsPtr != string::npos) {
        // cout << "print files and dir (ls)\n";
        while (!lines[i + 1].empty() && lines[i + 1][0] != '$') {
          string cline = lines[i + 1];

          // cout << "showing " << cline << endl;

          int isDir = cline.find("dir");

          if (isDir != string::npos) {
            string name = cline.substr(4);
            // cout << "creating dir: " << name << endl;
            dir* newdir = new dir(name);
            newdir->parent = cwd;
            cwd->dirs.push_back(newdir);
          } else {
            int space = cline.find(" ");
            int size = stoi(cline.substr(0, space));
            string name = cline.substr(space + 1);
            // cout << "creating file: " << name << " : " << size << endl;
            file* newfile = new file(name, size);
            cwd->files.push_back(newfile);
          }

          i++;
        }
      }
    }
  }

  int sum = 0;
  unordered_map<dir*, bool> visited;
  queue<dir*> q;
  q.push(&root);

  while (!q.empty()) {
    dir* cur = q.front();
    q.pop();

    // if(cur->name == "/") continue;
    if (visited[cur]) continue;
    visited[cur] = true;

    int size = cur->size();
    if (cur->name != "/" && size <= 100000) {
      sum += size;
    }

    for (auto it : cur->dirs) {
      q.push(it);
    }
  }

  cout << sum << endl;

  // root.print();

  return 0;
}