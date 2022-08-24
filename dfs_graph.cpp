#include<iostream>
#include<queue>
using namespace std;

void printDfs(int **edges,int vert,int start_vert,bool * visited){
	cout<<start_vert<<endl;
	visited[start_vert]=true;
	for(int i=0;i<vert;i++){
		if(i==start_vert){
		continue;
		}
		if(edges[start_vert][i]==1){
			if(visited[i]){
				continue;
			}
			printDfs(edges,vert,i,visited);
		}
	}
}

void printBfs(int **edges,int vert,int start_vert,bool *visited)
{
	//cout<<start_vert<<endl;
	queue<int> unvisited_vert;
	unvisited_vert.push(start_vert);
	visited[start_vert]=true;
	while(!unvisited_vert.empty()){
		int curr_vert=unvisited_vert.front();
		unvisited_vert.pop();
		cout<<curr_vert<<endl;
		for(int i=0;i<vert;i++){
			if(i==curr_vert){
				continue;
			}
			if(edges[curr_vert][i]==1 && !visited[i]){
				unvisited_vert.push(i);
				visited[i]=true;
			}
		}
	}
//	delete [] visited;
}


int main()
{
    int vert;
    int edge;
    cin>>vert>>edge;
    
	int **edges=new int *[vert];
	for(int i=0;i<vert;i++){
		edges[i]=new int[vert];
		for(int j=0;j<vert;j++){
			edges[i][j]=0;
		}
	}
	
	for(int i=0;i<edge;i++){
		int first_vert,second_vert;
		cin>>first_vert>>second_vert;
		edges[first_vert][second_vert]=1;
		edges[second_vert][first_vert]=1;
	}
	
	bool *visited=new bool[vert];
	for(int i=0;i<vert;i++){
		visited[i]=false;
	}
	
	
cout<<"DFS"<<endl;

printDfs(edges,vert,0,visited);	
/*cout<<"BFS"<<endl;
printBfs(edges,vert,0,visited);
delete visited;
*/
	for(int i=0;i<vert;i++){
		delete [] edges[i];
	}
	delete [] edges;

	
	
	
}
