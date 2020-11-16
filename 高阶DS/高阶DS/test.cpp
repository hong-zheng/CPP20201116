#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;


//// 并查集
//class UnionFindSet
//{
//public:
//	UnionFindSet(int n)
//	{
//		// n 个集合 ， -1初始化，为根
//		_v.resize(n, -1);
//	}
//
//	// 找到当前数值的根
//	int FindRoot(int x)
//	{
//		// 大于等于0的就直接向上继续寻找，当小于的时候就表示找到根了
//		while (_v[x] >= 0)
//			x = _v[x];
//		return x;
//	}
//
//	// 两颗树的合并
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
//	// 数组中数的个数
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

// 寄存器
// 三级缓存
// 内存
// 硬盘（机械硬盘和SSD
// 云存储


// 并查集本质就是森林，多棵树就构成了森林
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