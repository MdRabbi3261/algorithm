#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[10000];
vector<int>weight(10000,INT_MAX);
int vist[10000];
int parent[10000];
void print(int i)
{
  if (i == 0)
    return;
  cout << "->";
  cout << parent[i];
  print(parent[i]);
}
void bfs(int source)
{
    set<pair<int,int>>st;
    st.insert({0,source});
    weight[source]=0;
    while(st.size()>0)
    {
        pair<int,int> a=*st.begin();
        int wt=a.first;
        int node_st=a.second;
        st.erase(st.begin());
        if(vist[node_st]) continue;
        vist[node_st]=1;
        for(auto& child:v[node_st])
        {
            int child_node=child.first;
            int child_wt=child.second;
            if(weight[child_node]>weight[node_st]+child_wt)
            {
                weight[child_node]=weight[node_st]+child_wt;
                st.insert({weight[child_node],child_node});
                parent[child_node]=node_st;
            }
        }
    }
}
int main()
{
  int node,edge;
  cin>>node>>edge;
  for(int i=0;i<edge;i++)
  {
    int x,y,z;
    cin>>x>>y>>z;
    v[x].push_back({y,z});
    v[y].push_back({x,z});
  }
   int source;
  cin >> source;
  bfs(source);
   
   //cerr<<path[0] << endl;
 // bfs(source);
  //cerr<<path[0] << endl;
  for (int i = 0; i < node; i++)
  {
    int s = i;
    cout << "node=" << i << endl;
    cout << "path=" << weight[i] << endl;
    cout << i;
    print(i);
    cout << endl << endl;
  }
}