#include<bits/stdc++.h>
using namespace std;
int node, edge;
//vector<vector<int>> v(1000, vector<int>(1000, 0));
vector<int>v[1000];
int clour[1000];
int parent[1000];
int path[1000];

void bfs(int startnode) {
    clour[startnode] = 1;
    parent[startnode] = startnode;
    path[startnode] = 0;
    queue<int>q;
    q.push(startnode);
    while(!q.empty())
    {
       int x=q.front();
       q.pop();
       cout<<x<<endl;
       for(auto & child:v[x])
       {
          
             if(clour[child]==0)
             {
                q.push(child);
                clour[x]=1;
                parent[child]=x;
                path[child]=path[x]+1;
             }
          
       }
       
    }
}

int main()
{
    int x,y;
  cin>>node>>edge;
  for(int i=0;i<edge;i++)
  {
     cin>>x>>y;
     v[x].push_back(y);
     v[y].push_back(x);
     //v[x][y]=1;
     //v[y][x]=1;
  }
//   for(int i=0;i<node;i++)
//   {
//      for(int j=0;j<node;j++)
//      {
//       cout<<v[i][j]<<" ";
//      }
//      cout<<endl;
//   }
bfs(0);
}