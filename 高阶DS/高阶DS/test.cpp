#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;


//// ���鼯
//class UnionFindSet
//{
//public:
//	UnionFindSet(int n)
//	{
//		// n ������ �� -1��ʼ����Ϊ��
//		_v.resize(n, -1);
//	}
//
//	// �ҵ���ǰ��ֵ�ĸ�
//	int FindRoot(int x)
//	{
//		// ���ڵ���0�ľ�ֱ�����ϼ���Ѱ�ң���С�ڵ�ʱ��ͱ�ʾ�ҵ�����
//		while (_v[x] >= 0)
//			x = _v[x];
//		return x;
//	}
//
//	// �������ĺϲ�
//	bool Union(int x1,int x2)
//	{
//		int root1 = FindRoot(x1);
//		int root2 = FindRoot(x2);
//		if (root1 == root2)
//			return false;
//		_v[root1] += _v[root2];
//		_v[root2] = root1;
//		return true;
//	}
//
//	// ���������ĸ���
//	size_t Count() const
//	{
//		int cnt = 0;
//		for (int i = 0; i < _v.size(); ++i)
//		{
//			if (_v[i] < 0)
//				++cnt;
//		}
//		return  cnt;
//	}
//
//
//private:
//	vector<int> _v;
//};

// �Ĵ���
// ��������
// �ڴ�
// Ӳ�̣���еӲ�̺�SSD
// �ƴ洢


// ���鼯���ʾ���ɭ�֣�������͹�����ɭ��
class UnionFindSet{
public:



private:
	vector<int> _v;
};

int main(){

	cout << "end" << endl;
	system("pause");
	return 0;
}