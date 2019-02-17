//利用lambda表达式在main函数前打印一些信息
#include<iostream>
using namespace std;
int a = []()->int{
	cout << "Before main Function"<<endl;
	//不要使用中文字符串，不然编译提示错误：常量中有换行符
	//我也暂时没找到解决方案，属性里面改字符集不奏效
	return 0;
}();
 
 int main()
{
  cout<<"Atfer Main Function"<<endl;
  return 0;
}
