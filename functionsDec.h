//�Ӻ����ĺ�������
#include "datastruct.h";
#include "definitions.h";

mgraph initgraph();                      //ͼ�ĳ�ʼ��

int locatevex(mgraph c,int v);          //���Ҿ�����ͼ�е����

void path(mgraph c, int m,int n,int k);// (3) ��ӡ���Ϊm,n�����ĳ��Ȳ�����8�������·��

int allpath(mgraph c);                  //(4) ��ӡ�������ľ������������8������·��������(3)

void shortestpath_dij(mgraph c);        // (5) �õϽ�˹�����㷨�����һ�����㵽�������������·��������ӡ

int changegraph(mgraph *c);            //(13)ͼ��������������������ֵ��1

void shortestpath_floyd(mgraph c);     // (14) ��ѯ�����������·��

void seeabout(mgraph c);               // (15) ��ѯ�������Ϣ

void browsecompus(mgraph c)            // (16) ��ʾ���о�����Ϣ

void mainwork()                        // (17) ��Ҫ�����������������û�����
