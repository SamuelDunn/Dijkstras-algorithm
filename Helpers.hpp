
#ifndef Helpers_hpp
#define Helpers_hpp

#include <vector>
#include <sstream>
#include <string>
#include <tuple>


void loadGraph(std::string fileName, std::vector<std::tuple<int, int, int>> & store);

std::tuple<int, int, int> splitEdge(std::string &str, char delimiter);

#endif /* Helpers_hpp */
