#ifndef PARSE_GRAPH_HPP
#define PARSE_GRAPH_HPP

#include <fstream>

#include "initial_graph.hpp"
#include "utils.h"





namespace parse_graph {
	uint parse(
		std::ifstream& inFile,
		std::vector<initial_vertex>& initGraph,
		std::vector<edge_triple>& edgeList,
		const OrderSeq orderSeq,
		const long long arbparam,
		const bool nondirected );
}




#endif	//	PARSE_GRAPH_HPP