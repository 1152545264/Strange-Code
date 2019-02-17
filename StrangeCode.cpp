//利用lambda表达式在main函数前打印一些信息
#include<iostream>
using namespace std;

int a = []()->int
    {
      cout<<"在main函数之前执行的代码"<<endl;
      return 0;
    }();
 
 int main()
{
  cout<<"在main函数之后执行"<<endl;
  return 0;
}
