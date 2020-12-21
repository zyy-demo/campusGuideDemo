//有关图的函数申明
//(6)-(11)修改图的信息。包括建图、更新信息、删除、增加结点和边

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


