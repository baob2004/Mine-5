enum DIR {LEFT , UP , RIGHT , DOWN}; 
struct toado{
	int x = 400, y =200;	
} ;
struct toado1{
	int x = 100, y =550;	
} ;
struct toado2{
	int x = 300, y =750;	
} ;
struct toado3{
	int x = 500, y =1050;	
} ;
struct toado4{
	int x = 200, y =1350;	
} ;
struct toado5{
	int x = 0, y =130;	
} ;
struct ball{
	toado td;
	DIR tt;
};
struct bar1{
	toado1 td;
	DIR tt;
};
struct bar2{
	toado2 td;
	DIR tt;
};
struct bar3{
	toado3 td;
	DIR tt;
};
struct fence{
	toado4 td;
};
struct fence_head{
	toado5 td;
};
