#include<iostream>
using namespace std;
class Numbers{
	int x, y;
	public:
	Numbers(int a, int b);
	void display();
	~Numbers();
};
Numbers :: Numbers(int a, int b){
	x = a;
	y = b;
} 
void Numbers :: display(){
	cout<<"The numbers are: "<<x<<" and "
	<<y<<endl;
}
Numbers :: ~Numbers(){
	cout<<"Destructor is called."<<endl;
}
int main(){
	Numbers n(10,20);
	n.display();
return 0;
}

