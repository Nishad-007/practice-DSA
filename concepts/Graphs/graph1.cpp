#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// #define long long LL; 
// #define pair<int, int> pii; 
// #define pair<LL, LL> pll; 
// #define pair<string, string> pss; 
// #define vector<int> vi; 
// #define vector<vi> vvi; 
// #define vector<pii> vii; 
// #define vector<LL> vl; 
// #define vector<vl> vvl; 

// #define REP(i, n) FOR(i, 0, n) 
// #define REPN(i, n) FORN(i, 1, n) 
// #define MAX(a, b) a = max(a, b) 
// #define MIN(a, b) a = min(a, b)
// #define TC(t) while(t--) 

class graph{

public:
	unordered_map<int, list<int>> adj;

	void addEdge(int u , int v, bool direction){
		adj[u].push_back(v);

		if(direction == 0){
			adj[v].push_back(u);
		}
	}


	void printAdjList(){
		for (auto i:adj)
		{
			cout<<i.first<<"->";
			for (auto j: i.second)
			{
				cout<<j<<", ";
			}
			cout<<endl;
		}
	}
};

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout<<"enter the number of edges"<<endl;
    cin>>n;

    int m;
    cout<<"enter the number of edges"<<endl;

    cin>>m;

    graph g;

    for (int i = 0; i < m; ++i)
    {
    	int u, v;
    	cin>>u>>v;

    	g.addEdge(u,v,0);
    }

    g.printAdjList();
   	
    return 0;
}