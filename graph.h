// .graph format (undirected):
//   N M
//   id x y        (N lines, ids are 0..N-1, each used once)
//   u v weight    (M lines)
#pragma once
#include <string>
#include <vector>
using namespace std;

struct Edge { 
    int to; 
    double w; 
};

struct EdgeRec { 
    int u, v; 
    double w; 
};

struct Graph {
    int n = 0;
    vector<double> x, y;
    vector<vector<Edge>> adj;
    vector<EdgeRec> edges;
    double scale = 1.0;
};

bool loadGraph(const string& file, Graph& g);
