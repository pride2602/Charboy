#include "client.h"
// удаление вершины
void Graph::delVertex(int vnumber) {
	vertexes[vertexCount] = vnumber;
	vnumber--;
}
// удаление ребра
void Graph::delEdge(int v1, int v2) {
	matrix[v1][v2] = 0;
	matrix[v2][v1] = 0;
}