#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datastruct.h"
#include "definitions.h"
#include "gloabl.h"

//ͼ������㷨

//(6) ����ͼ���ڽӾ���
int creatgragh(mgraph *c);
// (7) ����ͼ�Ĳ�����Ϣ������ֵ: 1
int  newgraph(mgraph *c);
// (8) ����һ���ߡ�����ֵ��1
int enarc(mgraph *c);
// (9) ����һ����㡣����ֵ��1
int envex(mgraph *c);
// (10) ɾ��ͼ��һ�����㡣����ֵ��1
int delvex(mgraph *c);
//(11) ɾ��ͼ��һ���ߡ�����ֵ��1
int delarc(mgraph *c);

