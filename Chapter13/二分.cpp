#include<iostream>
using namespace std;
int n,m,i,x,a[1000010];
int erfind(int s,int t,int x){
	while (s<t){     // �����пɲ��������ʱ�� 
	   int m = (s+t)/2;   // 1. ȡ�м�λ��m
	   
	   // 2. �����м�λ����x�Ĵ�С��ϵ��������һ�εĲ��ҷ�Χ 
	   if(a[m]>=x)t=m;
	   else  s=m+1;   
	}
	if(a[t]==x)return t;
	return -1;
}

int main(){
   cin>>n>>m;
   for(i=1;i<=n;i++)cin>>a[i];
   
   for(i=1;i<=m;i++){
   	   cin>>x;
   	   cout<<erfind(1,n,x)<<endl;
   }
  return 0;
}
