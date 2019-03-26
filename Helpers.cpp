
#include "Helpers.hpp"
#include <sstream>
#include <iostream>
#include <cmath>
#include <fstream>



std::tuple<int, int, int> splitEdge(std::string &str, char delimiter) {
   std::vector<int> tokens;
   std::string token;
   std::istringstream tokenStream(str);
   while (std::getline(tokenStream, token, delimiter)) {
      tokens.push_back(std::stoi(token));
   }
   
   std::tuple<int, int, int> edge = std::tuple<int, int, int>(tokens[0], tokens[1], tokens[2]);
   return edge;

}



void loadGraph(std::string fileName, std::vector<std::tuple<int, int, int>> & store) {
   std::ifstream infile;
   infile.open(fileName);
   if(!infile) {
      std::cout << "File could not be opened" << std::endl;
      return;
   }
   std::string inString;
   while(getline(infile, inString)) {
      store.push_back(splitEdge(inString, ' '));
   }
   infile.close();
}





