#include "iostream"
#include "cstdio"
#include "algorithm"//Ϊ����sort����
using namespace std;

struct a {
	int b, num; //����ṹ��a
};

bool cmp(a x, a y) { //���塰С�ڡ������
	return x.b < y.b;
}

int main() {
	struct a a[1010];//����ṹ������
	int n, i, j;
	double time = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> a[i].b;
		a[i].num = i; //��Ŵ�����
	}
	sort(a + 1, a + n + 1, cmp); //����
	for (i = 1; i <= n; i++) {
		cout << a[i].num << " "; //�ȰѼ򵥵����ˣ�������С����ı��
	}
	cout << endl; //Ҫ����
	for (j = n - 1; j >= 1; j--) { //�ȴ������ļ���������n-1��ʼ
		i = n - j; //���Ǹ����ɣ���ǰ����ʱ�������ź�Ҫ�ȴ�������֮��=n
		time += a[i].b * j; //�ۼ�
	}
	printf("%.2lf", time / n); //��ƽ����������λС��
	return 0;
}