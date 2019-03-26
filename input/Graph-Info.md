All graph files have three columns filled with integer values:
``Col1: Source Node Label`` ``Col2: Target Node Label`` ``Col3: Edge Weight``
All graph data was cleaned to remove any duplicate edges and negative edge weights (Dijkstra's algorithm requires positive edge weights). Graph vertices are labeled with integer values starting from 0.

**Graphs**:
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



