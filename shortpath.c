#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

#include "buildgraph.c"
//���·��
void shortestpath_dij(mgraph c); // (5) �õϽ�˹�����㷨�����һ�����㵽�������������·��������ӡ
void shortestpath_floyd(mgraph c);     // (14) ��ѯ�����������·��floyd
