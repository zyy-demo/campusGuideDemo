//子函数的函数声明
#include "datastruct.h";
#include "definitions.h";

mgraph initgraph();                      //图的初始化

int locatevex(mgraph c,int v);          //查找景点在图中的序号

void path(mgraph c, int m,int n,int k);// (3) 打印序号为m,n景点间的长度不超过8个景点的路径

int allpath(mgraph c);                  //(4) 打印两景点间的景点个数不超过8的所有路径。调用(3)

void shortestpath_dij(mgraph c);        // (5) 用迪杰斯特拉算法，求出一个景点到其他景点间的最短路径，并打印

int changegraph(mgraph *c);            //(13)图操作的主调函数。返回值：1

void shortestpath_floyd(mgraph c);     // (14) 查询两景点间的最短路径

void seeabout(mgraph c);               // (15) 查询景点的信息

void browsecompus(mgraph c)            // (16) 显示所有景点信息

void mainwork()                        // (17) 主要工作函数。操作区用户界面
