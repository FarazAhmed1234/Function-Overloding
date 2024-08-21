#include<iostream>
using namespace std;

class Volume{
    public:
    double calculateVolume(double l){
        return l*l*l;
    }

    double calculateVolume(double l ,double w, double h){
        return l*w*h;
    }

    double calculateVolume(double h , double r){

        return (3.14*(r*r)*h);
    }
};
int main(){

Volume obj;

cout << "Cube Volume: " << obj.calculateVolume(3) <<endl;
cout << "Rectangular Prism Volume: " << obj.calculateVolume(3, 4, 5) <<endl;
cout << "Cylinder Volume: " << obj.calculateVolume(2, 5) <<endl;


return 0;
}