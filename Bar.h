void Bar(int &score,int &speed,struct bar1 &br1, struct bar2 &br2,struct bar3 &br3,struct fence &f){
 		draw_bar1(br1.td.x,br1.td.y,br1);
  		br1.td.y-=5;
  		draw_bar2(br2.td.x,br2.td.y,br2);
  		br2.td.y-=5;
  		draw_bar3(br3.td.x,br3.td.y,br3);
  		br3.td.y-=5;
  		draw_fence(f.td.x,f.td.y,f);
  		f.td.y-=5;
  		if(br1.td.y <= 150){
  			br1.td.y+=730;
			br1.td.x = rand()%550;		
		}
  		if(br2.td.y <= 150){
  			br2.td.y+=730;
			br2.td.x = rand()%550;		
		}
  		if(br3.td.y <= 150){
  			br3.td.y+=730;
			br3.td.x = rand()%550;	
		   score++;
		   if(score % 3 == 0){
   		   speed -= 1;
   			}
		}
  		if(f.td.y <= 150){
  			f.td.y+=730;
			f.td.x = rand()%600;		
		}
}
