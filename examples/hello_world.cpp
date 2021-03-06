#include <iostream>

#include <igraphpp/igraph.hpp>

int main(void) {
  using igraph::Graph;
  using std::cout;

  Graph g = Graph(10);
  g.add_edges({0, 1, 0, 9});

  cout << "Vertices : " << g.vcount() << "\n";
  cout << "Edges    : " << g.ecount() << "\n";
  return 0;
}
