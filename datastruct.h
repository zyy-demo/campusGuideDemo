#include <stdio.h>
#include <stdlib.h>
#include  "definitions.h"

//数据类型的定义
//（1）无向带权图的定义

//图的邻接矩阵定义
typedef struct arcell
{
    int adj;
} arcell, adjmatrix[MaxVertexNum][MaxVertexNum];

//景点信息结构体定义
typedef struct vexsinfo
{
    int position;
    char name[32];
    char introduction[256];
} vexsinfo;

//图结构信息定义
typedef struct mgraph
{
    vexinfo vexs[MaxVertexNum];  //顶点向量
    adjmatrix arcs;  //邻接矩阵
    int vexnum, arcnum;   //分别保存顶点个数和边的个数
}

