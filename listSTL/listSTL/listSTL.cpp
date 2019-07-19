#include<iostream>
#include<list>
using namespace std;

//
//int main1()
//{
//	//list<int>mylist;		定义一个空的list
//	//list<int>mylist(10);	10个链表个数每一个都是0；
//	//list<int>mylist(10,2); 10个链表个数每一个都是2；
//
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	list<int>mylist(arr, arr + 10);
//	mylist.push_back(88);
//	mylist.push_front(99);
//	mylist.pop_back();
//	mylist.assign(12, 1);//给空链表赋值,例如空创建一个链表：list<int>mylist;
//
//	list<int>::reverse_iterator rit = mylist.rbegin();//反向迭代器
//	while (rit != mylist.rend())
//	{
//		cout << *rit << "-->";
//		++rit;
//	}
//	cout << endl;
//
//	list<int> ::iterator it = mylist.begin();//正向迭代器
//	while (it != mylist.end())
//	{
//		cout << *it << "-->";
//		++it;
//	}
//	cout << "Null" << endl;
//
//
//	cout << "size: " << mylist.size() << endl; //求链表节点个数
//	cout << "max size: " << mylist.max_size() << endl;//节点可容纳的量
//	cout << "is empty(1 empty, 0 not empty): " << mylist.empty() << endl;
//	cout << "the first value is: " << mylist.front() << endl;
//	cout << "the first value is: " << mylist.back() << endl;
//
//	return 0;
//}
//
//int main2()
//{
//	int arr[] = { 20,30,40,50 };
//	list<int>youlist(arr, arr + 5);//youlist赋值
//
//	list<int>mylist;
//	for (int i = 0; i <= 10; ++i)//mylist赋值
//	{
//		mylist.push_back(i);
//	}
//	list<int>::iterator it = mylist.begin();//打印mylist内的值
//	while (it != mylist.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	//把youlist移入mylist内，用赋值方法assign
//	list<int> ::iterator first = youlist.begin();
//	list<int>::iterator last = youlist.end();
//
//	mylist.assign(first, last);
//	it = mylist.begin();
//	while (it != mylist.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}

int main()
{
	list<int>mylist{1,2,3,4,5,6,7,8,9};
	list<int>youlist{ 20,30,40 };

	list<int>::iterator youlistfirst = youlist.begin();
	list<int>::iterator youlistlast = youlist.end();
	list<int>::iterator it = mylist.begin();
	 it = mylist.begin();
	while (it!=mylist.end())
	{
		cout << *it << "-->";
		++it;
	}
	cout << "nul" << endl;

	it = mylist.begin();
	it++;
	mylist.insert(it,youlistfirst,youlistlast);
	mylist.erase(it);
	it = mylist.begin();
	while (it != mylist.end())
	{
		cout << *it << "-->";
		++it;
	}
	cout << "nul" << endl;
}
