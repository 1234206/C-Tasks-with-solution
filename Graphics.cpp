#include<msoftcon>
#include<iostream>
using namespace std;
draw(){
	set_color(fillcolor);
	set_fill_style(fillstyle);
	draw_circle(xCo,yCo,radius);
}
int main(){
	init_graphics();
	circle c1;
	c1.set(15,7,5,cBLUE,x_fill);
	
	c1.draw();
	
	return 0;
}
