#include<iostream>

using namespace std;

static int chessboard[5][9];
static int count=0;
/*
�����յķ���(dx, dy)��dx��ʾ5���еĵڼ��е���ֱ����dy��ʾ9���еڼ��еĺ᷽��
�ϣ�(2, 1)
���ң�(1, 2)
���ң�(-1, 2)
�£� (-2, 1)
*/
const int dx[4] = {2, 1, -1, -2};
const int dy[4] = {1, 2, 2, 1};

void horse_count(int srcx, int srcy, int destx, int desty)
{
    if(srcx>=0 && srcx<5 && srcy>=0 && srcy<9 && chessboard[srcx][srcy]==0)
    {
        if(srcx == destx-1 && srcy == desty-1)
        {
            count++;
            return;
        }
        //���Ϊ�Ѿ��߹�
        chessboard[srcx][srcy] = 1;
        int i;
        for(i=0; i<4; ++i)
        {
            horse_count(srcx+dx[i], srcy+dy[i], destx, desty);
        }
        //�������ĸ�����󣬻��ݵ�֮ǰ�߹���һ�������Ϊδ�߹���
        chessboard[srcx][srcy] = 0;
    }
}

int main()
{
    cout<<"������Ҫ�������̵�����: ";
    int m, n;
    cin>>m>>n;
    horse_count(0, 0, m, n);
    cout<<"�߷���������"<<count<<endl;
    return 0;
}
