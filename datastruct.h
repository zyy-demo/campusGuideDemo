#include <stdio.h>
#include <stdlib.h>
#include  "definitions.h"

//�������͵Ķ���
//��1�������Ȩͼ�Ķ���

//ͼ���ڽӾ�����
typedef struct arcell
{
    int adj;
} arcell, adjmatrix[MaxVertexNum][MaxVertexNum];

//������Ϣ�ṹ�嶨��
typedef struct vexsinfo
{
    int position;
    char name[32];
    char introduction[256];
} vexsinfo;

//ͼ�ṹ��Ϣ����
typedef struct mgraph
{
    vexinfo vexs[MaxVertexNum];  //��������
    adjmatrix arcs;  //�ڽӾ���
    int vexnum, arcnum;   //�ֱ𱣴涥������ͱߵĸ���
}

