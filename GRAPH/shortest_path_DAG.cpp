#include <iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<limits>

using namespace std;

class graph{

  public:
   unordered_map<int , list<pair < int , int> > > adj;
   void addEdge(int u , int v , int weight){
     pair<int , int > p  = make_pair(v, weight);
     adj[u].push_back(p);
   }

   void printADJ()
   {
     for(auto i : adj){
        cout << i.first << " -> " ;
         for(auto j : i.second)
         {
            cout << " [ " << j.first << " , " << j.second << "] ," ;
         } cout << endl;
     }
   }

   void dfs(int node ,  unordered_map<int , bool > &vis , stack<int>& s  )
   {
      vis[node] = true;

      for(auto neighbour : adj[node])
      {
        if(!vis[neighbour.first])
        {
            dfs(neighbour.first , vis , s);
        }
      }
      s.push(node);
   }

   void getSortestPath(int src , vector<int >& dist , stack<int> &s )
   {
      
       dist[src] = 0;
       
       while(!s.empty())
       {
        int top = s.top();
         s.pop();
         cout << endl;
         cout << top <<  ","<< dist[top] << "," << INT_MAX <<  endl;
         if(dist[top] != INT_MAX) // pehle dikkat aayi smjhne me pr ab aagya h 
         // sbse pehle aaye ga top == 0 , vo is condition fullfil nhi krta toh vo andr aaye hi nhi 
         // fir top == 1 aaye ga uski dist[top] == 0 h toh vo aaye ga or uske neighbour ki processing ho jaaye gi 
         // fir top == 2 ese hi aage hota jaaye ga  
         {
            for(auto i : adj[top])
            {
                if(dist[top] + i.second < dist[i.first])
                {
                    dist[i.first] = dist[top] + i.second;
                }
            }
         }

       }


    }


};



int main()
{

    graph g;
    g.addEdge(0 , 1, 5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);
  
    g.printADJ();
   
   int n = 6;
   // topological sort

   unordered_map<int , bool> visited;
   stack<int> s;
   for(int i = 0 ; i < n ; i++ )
   {
       if(!visited[i])
       {
           g.dfs(i , visited , s);
       }
   }

   int src  = 1;
   vector<int> dist(n);
   for(int i = 0 ; i < n ; i++)
   {
      dist[i] = INT_MAX;
   }
   

   g.getSortestPath(src , dist , s);

   cout << "answer is : " << endl;

   for(int i = 0 ; i < dist.size() ; i++)
   {
    cout << dist[i] << " " ;
   }cout << endl;
 

    return 0;
}