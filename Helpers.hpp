
/*
 void loadGraph(std::string fileName, std::vector<std::tuple<int, int, int>> & store);
 This is called by the constructor of the Graph struct. It takes a .txt file
 that integer values making up three columns that are separated by a single space.
 The first column gives the label of the target node that an edge comes out of
 The second column gives the label of the target node. This is the node that the
 edge coming out of the source node terminates on. The third column gives the
 weight of the edge running between the source and target nodes. There should only
 be three values per row in the file corresponding the the three values mentioned
 above. A newline should come after the third value in each row.
The second argument for this function is a vector of tuples. The vector should be
 empty when it is passed to this function. The function will fill the vector
 with the values in the file.

 std::tuple<int, int, int> splitEdge(std::string &str, char delimiter);
 this function takes a string and a delimiter that denotes where the string should
 be split. It is used to split the lines in the graph input file into three integers.
 It then places them in an ordered triple and returns.

*/

#ifndef Helpers_hpp
#define Helpers_hpp

#include <vector>
#include <sstream>
#include <string>
#include <tuple>


void loadGraph(std::string fileName, std::vector<std::tuple<int, int, int>> & store);

std::tuple<int, int, int> splitEdge(std::string &str, char delimiter);

#endif /* Helpers_hpp */
