#include <bits/stdc++.h>//�����ܿ⣩

struct px { //������һ���ṹ�����飬�ֱ𴢴濪ʼʱ��ͽ���ʱ�䣩
	int a;//����ʼʱ�䣩
	int b;//������ʱ�䣩
} x[2000000];

bool cmp(px x, px y) { //�����ܿ�ʼʱ�䣬ֱ�Ӱ��ս���ʱ������
	return x.b < y.b;
}
using namespace std;

int main() {
	int n, sum = 1, mi;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		cin >> x[i].a >> x[i].b; //���������ݣ�
	sort(x + 1, x + n + 1, cmp); //������
	mi = x[1].b; //�����Լ�¼��һ��ֵ��
	int j = 1;
	while (j <= n) { //��δ�Ż��ĳ���ѭ����
		j++;
		if (x[j].a >= mi) { //���ҵ�����Ҫ��ı�������¼���μӣ�
			sum++;//��������
			mi = x[j].b;
		}
	}
	cout << sum; //�������
	return 0;//������Բ����
}