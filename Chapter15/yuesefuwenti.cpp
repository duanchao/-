#include<cstdio>
using namespace std;
int main()
{
    int n,m,s=0;scanf("%d%d",&n,&m);//���
    bool visit[200]={0};//visit����ʼֵ
    for(int k=0;k<n;k++){//�ܹ�Ҫ����n��
        for(int i=0;i<m;i++){if(++s>n)s=1;if(visit[s])i--;}//����ȡģ������Ϊ�����Ǵ�1��ʼ�ģ����Բ�ȡģ�����жϣ���visit������i--��ʹ�����ѭ��
        printf("%d ",s);visit[s]=true;//�������¼�ѳ���
    }
    return 0;
}
