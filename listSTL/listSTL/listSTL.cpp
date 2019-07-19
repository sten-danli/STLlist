#include<iostream>
#include<list>
using namespace std;


int main1()
{
list<int>mylist;			//定义一个空的list链表。
list<int>mylist(10);		//创建10个链表，每一个都是0。
list<int>mylist(10,2);		//创建10个链表，每一个都是2。

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }; //用array初始化一个链表。
	list<int>mylist(arr, arr + 10); 

	mylist.push_back(88);	//后插入。
	mylist.push_front(99);	//前插入。
	mylist.pop_back();		//后去除。

	mylist.assign(12, 1);	//给一个已经创建的空链表赋值,例如已经建立了空链表：list<int>mylist，然后用assign方法初始化mylist.

	//反向迭代器用来倒序输出链表内的内容。
	list<int>::reverse_iterator rit = mylist.rbegin();	
	while (rit != mylist.rend())
	{
		cout << *rit << "-->";
		++rit;
	}
	cout << endl;

	//正向迭代器迭代器用来倒序输出链表内的内容。
	list<int> ::iterator it = mylist.begin();
	while (it != mylist.end())
	{
		cout << *it << "-->";
		++it;
	}
	cout << "null" << endl;

	//一些其他简单功能
	cout << "size: " << mylist.size() << endl;									//求链表节点个数。
	cout << "max size: " << mylist.max_size() << endl;							//节点可容纳的量。
	cout << "is empty(1 empty, 0 not empty): " << mylist.empty() << endl;		//链表是否为空。
	cout << "the first value is: " << mylist.front() << endl;					//链表的第一位内容。
	cout << "the first value is: " << mylist.back() << endl;					//链表的最后以为内容。

	return 0;
}


int main2()
{
	int arr[] = { 20,30,40,50 };
	list<int>youlist(arr, arr + 5);//youlist赋值

	list<int>mylist;
	for (int i = 0; i <= 10; ++i)//mylist赋值
	{
		mylist.push_back(i);
	}
	list<int>::iterator it = mylist.begin();//打印mylist内的值
	while (it != mylist.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//把youlist移入mylist内，用赋值方法assign
	list<int> ::iterator first = youlist.begin();
	list<int>::iterator last = youlist.end();
	//用赋值方法assign
	mylist.assign(first, last);
	it = mylist.begin();
	while (it != mylist.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}

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
	it++;					//设定指针it在mylist里面的位置。
	mylist.insert(it,youlistfirst,youlistlast);//把youlist加入到mylist内，it = mylist.begin(); 和 it++;且定了插入地点。
	mylist.erase(it);		//删除it指定的内容地点。
	it = mylist.begin();
	while (it != mylist.end())//再次打印删除it后的内容。
	{
		cout << *it << "-->";
		++it;
	}
	cout << "nul" << endl;
}
