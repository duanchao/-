#include<cstdio>
#include<cstdlib>
using namespace std;
#define maxn 20
char c[256];
bool judge(char c[256])
{ 
    int top=0,i=0;
    while (c[i]!='@') 
    {
        if (c[i]=='(') top++;
        if (c[i]==')') 
        {
           if (top>0) top--;
             else return 0;
        }
        i++;
    }
    //���ջ�Ƿ�Ϊ�ա�������˵����δƥ�������
    if (top!=0) return 0;          
    else return 1;
}
main()
{    
  scanf("%s",c);   
  if (judge(c))printf("YES");
  else printf("NO");
  return 0;
}

