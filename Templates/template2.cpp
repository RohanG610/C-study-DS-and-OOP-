#include<iostream>
using namespace std;

template<class T>
class Vector
{
    public:
        T* arr;
        int size;
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotProduct(Vector &v)
        {
            T d = 0;
            for(int i =0; i<size;i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
int main()
{
    Vector<float> v1(3);
    v1.arr[0]=0.1;
    v1.arr[1]=2.3;
    v1.arr[2]=5.6;
    Vector<float> v2(3);
    v2.arr[0]=0;
    v2.arr[1]=4.5;
    v2.arr[2]=9.0;

    cout<<v2.dotProduct(v1);
}
