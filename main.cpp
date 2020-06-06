#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

// 基类
class Shape
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
      virtual int area() {
          cout<<"in shap "<<endl;
          return 0;
      }

   protected:
      int width;
      int height;
};

// 派生类
class Rectangle: public Shape
{
   public:
      int getArea()
      {
         cout<<"Area is"<<width*height<<endl;
         return (width * height);
      }
      int area() {
          cout<<"in Reactangle "<<endl;
          return 0;
      }
};



// 声明一个结构体类型 Books
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
   void testStruct();
};

namespace xxq_space {
//函数模块（类模板）
template<class T>
//template<typename T>
void swap(T &a,T &b) {
    if(a==0||b==0) {
        throw "a or b is zero";
    }
    cout<<"start swap a and b"<<endl;
    T tmp = a;
    a = b;
    b = tmp;
}

void printTest() {
    char name[50];
    cin >> name;
    cout<<"name is "<<name<<endl;
}

}


int main()
{
    Shape *shap;//使用指针才生效
    Rectangle rectangle;
    rectangle.setHeight(6);
    rectangle.setWidth(8);
    rectangle.getArea();

    shap = &rectangle;
    shap->area();


    ofstream outfile;
    char data[100];
    outfile.open("a.txt");
    cout<<"input string to a.txt"<<endl;
    cin.getline(data,100);
    outfile<<data<<endl;

    Books bk1;
    strcpy( bk1.title, "C++ 教程");
    cout << "第一本书标题 : " << bk1.title <<endl;

    cout << "Hello World!" << endl;
    int a = 0;
    int b = 20;
    try {
        xxq_space::swap(a,b);
    } catch(const char* msg) {
       cerr<<msg<<endl;
    }

    cout <<a<<endl;

    xxq_space::printTest();

    return 0;
}


