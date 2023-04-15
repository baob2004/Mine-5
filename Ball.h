#include <graphics.h>
int Ball(struct ball &b,struct bar1 &br1, struct bar2 &br2,struct bar3 &br3,struct fence &f,int &heart){
  	draw_ball(b.td.x,b.td.y,b);
  	if(b.td.y - 20 == 170){
		b.td.x = rand()%680;
		b.td.y = 200;
		heart--;
	}else if(b.td.y + 20 == f.td.y && b.td.x <= f.td.x + 100 && b.td.x >= f.td.x ){
		f.td.y = 1000;
		heart = 0;
	}
	else if (b.td.y + 20 == br1.td.y && b.td.x <= br1.td.x + 150 && b.td.x >= br1.td.x) {
        b.tt = UP; 
	}else if(b.td.x < 0 ){
		b.td.x = 690;
	}else if(b.td.x > 700 ){
		b.td.x = 10;
	}
	else if (b.td.y + 20 == br2.td.y && b.td.x <= br2.td.x + 150 && b.td.x >= br2.td.x) {
        b.tt = UP; 
	}
	else if (b.td.y + 20 == br3.td.y && b.td.x <= br3.td.x + 150 && b.td.x >= br3.td.x) {
        b.tt = UP; 
	}
	else{b.tt = DOWN;}
	
    if(b.tt == DOWN){
  		b.td.y+=5;
	}
    else if(b.tt == UP){
    	b.td.y -=5;
    }   
    if(GetAsyncKeyState(VK_LEFT)){b.td.x-=8; }
    if(GetAsyncKeyState(VK_RIGHT)){b.td.x+=8; }   
}
