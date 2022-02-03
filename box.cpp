//find the volume of the box by creating constructor and method....
#include<iostream>
using namespace std;
class Box{
	public:
		int width;
		int height;
		int depth;
		Box(int width,int height,int depth){
			this->width=width;
			this->height=height;
			this->depth=depth;
			
		}
		void Volume(int width,int height,int depth){
			int vol=width*height*depth;
			cout<<"volume of the box is:"<<vol;
		}
};
int main(){
	Box obj=Box(3,4,5);
	obj.Volume(3,4,5);
	return 0;
}
