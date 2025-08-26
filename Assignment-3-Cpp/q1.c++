#include <iostream>
using namespace std;
class Math{
    public:
    static const double PI;
    static float pow(float base,int index){
        if(index == 0) return 1;
        if(index == 1) return base;
        return base*pow(base,index-1);
    }
};
    const double Math::PI = 3.14;

class Cylinder{
    double radius,height,volume;
    public:
    Cylinder():radius(0),height(0){}
    Cylinder(double radius,double height):radius(radius),height(height){}
    int getRadius(){
        return radius;
    }
    void setRadius(float radius){
        this->radius = radius;
    }
    int getHeight(){
        return height;
    }

    void setHeight(float height){
        this->height = height;
    }

    void calculateVolume(){
        volume = Math::PI*Math::pow(radius,2)*height;
        cout<<"Volume:"<<volume<<endl;
    }   
};
int main(){
    Cylinder c(10,2);
    cout<<c.getRadius()<<endl;
    cout<<c.getHeight()<<endl;
    c.calculateVolume();
    return 0;
}