#include <iostream>
#ifndef __GRAPH__
#define __GRAPH__

#define SIZE 10




class Graph {
    public:
        Graph();
        // ���������� �������
        void addVertex(int vnumber);
        // ���������� �����
        void addEdge(int v1, int v2, int weight);
        // �������� �������
        void delVertex(int vnumber);
        // �������� �����
        void delEdge(int v1, int v2);
        
        friend bool test(const Graph& g);
        void dummy1(int vnumber);
        void dummy2(int v1, int v2);        
    private:
        bool edgeExists(int v1, int v2);
        bool vertexExists(int v);

        int matrix[SIZE][SIZE]; // ������� ���������
         
        int vertexes[SIZE]; // ��������� ������
        int vertexCount; // ���������� ����������� ������
};
#endif