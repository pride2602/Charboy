#include "client.h"
// �������� �������
void Graph::delVertex(int vnumber) {
	vertexes[vertexCount] = vnumber;
	vnumber--;
}
// �������� �����
void Graph::delEdge(int v1, int v2) {
	matrix[v1][v2] = 0;
	matrix[v2][v1] = 0;
}