#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datastruct.h"
#include "definitions.h"
#include "gloabl.h"

//图的相关算法

//(6) 构造图的邻接矩阵
int creatgragh(mgraph *c);
// (7) 更新图的部分信息。返回值: 1
int  newgraph(mgraph *c);
// (8) 增加一条边。返回值：1
int enarc(mgraph *c);
// (9) 增加一个结点。返回值：1
int envex(mgraph *c);
// (10) 删除图的一个顶点。返回值：1
int delvex(mgraph *c);
//(11) 删除图的一条边。返回值：1
int delarc(mgraph *c);

