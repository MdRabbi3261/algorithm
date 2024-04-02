#include <bits/stdc++.h>
using namespace std;
vector<int> v[10000];
int vi[10000];
int parint[10000];
int path[1000];
void print(int i)
{
  if (i == 0)
    return;
  cout << "->";
  cout << parint[i];
  print(parint[i]);
}
void bfs(int startnode)
{
  parint[startnode] = startnode;
  path[startnode] = 0;
   vi[startnode]=1;
  queue<int> q;
  q.push(startnode);
  while (!q.empty())
  {
    int x = q.front();
    q.pop();
    for (auto &child : v[x])
    {
      if (vi[child] == 0)
      {
        q.push(child);
        parint[child] = x;
        path[child] = path[x] + 1;
        vi[child] = 1;
      }
    }
  }
}
int main()
{
  int node, edge;
  cin >> node >> edge;
  for (int i = 0; i < edge; i++)
  {
    int x, y;
    cin >> x >> y;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  int source;
  cin >> source;
   //cerr<<path[0] << endl;
  bfs(source);
  //cerr<<path[0] << endl;
  for (int i = 0; i < node; i++)
  {
    int s = i;
    cout << "node=" << i << endl;
    cout << "path=" << path[i] << endl;
    cout << i;
    print(i);
    cout << endl << endl;
  }
}