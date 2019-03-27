# Dijkstras-algorithm
Implementation of Dijkstra's shortest path graph algorithm. 

# Implementation Details
This version of the algorithm utilizes a binary minheap in order to determine which edge to traverse at each step. As a result, for a graph made up of a vertex set V and an edge set E, the worst-case time complexity of the algorithm is O(|E|log|V|) where |E| is the number of edges in the graph and |V| is the number of vertices. This algorithm works well on sparse graphs but since worst case |E| is O(|V|^2) this version of the algorithm is suboptimal for dense graphs. The input is a graph (either directed or undirected), a soure vertex S and an target vertex T. The output is a path from S to T whose edge weight sum is the minimum of all such paths. 

# Installation
- User must have the g++ compiler installed
- Clone or fork the repo
- Open a teminal window and navigate to the Dijkstras-algorithm directory
- In the terminal type ```make``` and hit enter to compile the program
- Then type ```./mainExe``` and hit enter to run the program
- An output will be displayed in the terminal that gives the shortest paths from the source vertices to the target vertices that are specified in ```main.cpp``` for each of the test graphs
- Change the source verticex and target verticex paremeters of the ```dijkstra()``` function in ```main.cpp``` to test the algorithm further and to produce different results
- To clean the Dijkstras-algorithm directory type ```make clean``` and all object files and executables will be deleted

# Graphs Used for Testing
All graph files have three columns filled with integer values:
``Col1: Source Node Label`` ``Col2: Target Node Label`` ``Col3: Edge Weight``  
All graph data was cleaned to remove any duplicate edges and negative edge weights (Dijkstra's algorithm requires positive edge weights). Graph vertices are labeled with integer values starting from 0. 
  
UCI-social-network.txt    
Vertices: 1900  
Edges: 59287  
Directed: Yes  
Reference: <https://toreopsahl.com/datasets/#online_social_network>

soc-sign-bitcoinotc-clean.txt  
Vertices: 6006  
Edges: 35592   
Directed: Yes  
Reference: <https://snap.stanford.edu/data/soc-sign-bitcoin-otc.html>   

soc-sign-bitcoinalpha-clean.txt   
Vertices: 7605  
Edges: 24186   
Directed: Yes  
Reference: <https://snap.stanford.edu/data/soc-sign-bitcoin-alpha.html>

roadNet-CA-clean.txt
Vertices: 1971281  
Edges: 5533214   
Directed: No    
Reference: <https://snap.stanford.edu/data/roadNet-CA.html>  
Note: The source graph is unweighed. In order to make this graph a suitable one for testing Dijkstra's algorithm on random edge weights were added with values in the range [0, 100].

