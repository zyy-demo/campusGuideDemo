#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

//(3) 、(4) 求两景点间的所有路径
void path(mgraph c, int m,int n,int k);// (3) 打印序号为m,n景点间的长度不超过8个景点的路径
int allpath(mgraph c);                  //(4) 打印两景点间的景点个数不超过8的所有路径。调用(3)
