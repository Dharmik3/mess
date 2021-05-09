#include <iostream>
using namespace std;

class dis_add{
    int feet;
    int inch;
public:
    dis_add(int fe=0,int in=0)
        :inch(in),feet(fe){
        }
    void input(){
        cout <<"Enter The Distance in Feet:";
        cin >> feet;
        cout <<"Enter The Distance in Inch:";
        cin>>inch;
    }
    dis_add operator+(dis_add &source);
    void prnt_mem(){
        cout << "Feet: " << feet;
        cout << "\ninch: " << inch;
    }
};
dis_add dis_add::operator+(dis_add &source){
    feet += source.feet;
    inch += source.inch;
    dis_add new_obj(feet,inch);
    return new_obj;
}
int main()
{
    dis_add obj1;
    obj1.input();
    dis_add obj2;
    obj2.input();
    dis_add res = obj1 + obj2;
    res.prnt_mem();
    return 0;
}
