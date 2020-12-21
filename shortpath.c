#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#include "buildgraph.c"
//最短路径
void shortestpath_dij(mgraph c); // (5) 用迪杰斯特拉算法，求出一个景点到其他景点间的最短路径，并打印
void shortestpath_floyd(mgraph c);     // (14) 查询两景点间的最短路径floyd
