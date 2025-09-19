#include <iostream>
#include <vector>
#include <queue>

std::vector<int> graph[1001];
bool beenTraversed[1001] = {  };

void printGraph(int numberOfVertices) {

		std::cout<<"\n";

		for(int i = 1; i <= numberOfVertices; i++ ) {
			std::cout<<i<<" -> ";

			for( auto it : graph[i] ) {
				std::cout<<it<<' ';
			}

			std::cout<<'\n';
		}
}

void DFS(int v, bool* beenTraversed) {
	beenTraversed[v] = 1;		
	std::cout<<v<<' ';

	for( auto it : graph[v] ) {
		if(beenTraversed[it] == 0)
			DFS(it, beenTraversed);
	}
}

void BFS(int v, bool* beenTraversed) {
	std::queue<int> q;
	int tmp;

	q.push(v);

	while( !q.empty() ) {
		tmp = q.front();
		q.pop();

		beenTraversed[tmp] = 1;
		std::cout<<tmp<<' ';

		for( auto it : graph[tmp] ) {
			if(beenTraversed[it] == 0)
				q.push(it);
				beenTraversed[it] = 1;
		}

	}
}

int main() {
	std::ios_base::sync_with_stdio(false); std::cin.tie(0);

	int i, j, numberOfGraphs, numberOfVertices, numberOfNeighbours, typeOfSearch, vertice, tmp;

	std::cin>>numberOfGraphs;

	for( j = 1; j <= numberOfGraphs; j++ ) {
		std::cin>>numberOfVertices;

		//while(numberOfVertices--) {
		for( i = 1; i <= numberOfVertices; i++ ) {
			graph[i].clear();

			std::cin>>vertice>>numberOfNeighbours;

			while(numberOfNeighbours--) {
				std::cin>>tmp;

				graph[vertice].push_back(tmp);
			}
		}

		std::cout<<"graph "<<j<<'\n';

		std::cin>>vertice>>typeOfSearch;

		while( vertice != 0 ) {

			for( i = 1; i <= numberOfVertices; i++ )
				beenTraversed[i] = 0;

			if(typeOfSearch == 0) DFS(vertice, beenTraversed);
			else if(typeOfSearch == 1) BFS(vertice, beenTraversed);

			std::cout<<'\n';

			std::cin>>vertice>>typeOfSearch;
		}

	}

	return 0;
}
