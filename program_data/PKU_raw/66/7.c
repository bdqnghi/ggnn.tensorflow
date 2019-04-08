int main(){
	int i,a=0,b=0;               //a ???? b????
	int y,m,d;
	int s,t,n,x,c;
	scanf("%d%d%d",&y,&m,&d);

	s=y%400;

for(i=0;i<s;i++)
	{if((i%100!=0&&i%4==0)||(i%400==0))
       a=a+1;
     else
     b=b+1;
	}
	c=365*b+366*a;


if((y%100!=0&&y%4==0)||(y%400==0))

	{switch(m){
case 1:n=d;break;
case 2:n=31+d;break;
case 3:n=60+d;break;
case 4:n=91+d;break;
case 5:n=121+d;break;
case 6:n=152+d;break;
case 7:n=182+d;break;
case 8:n=213+d;break;
case 9:n=244+d;break;
case 10:n=274+d;break;
case 11:n=305+d;break;
default:n=335+d;
	}
}
	else 
	{
switch(m){
case 1:n=d;break;
case 2:n=31+d;break;
case 3:n=59+d;break;
case 4:n=90+d;break;
case 5:n=120+d;break;
case 6:n=151+d;break;
case 7:n=181+d;break;
case 8:n=212+d;break;
case 9:n=243+d;break;
case 10:n=273+d;break;
case 11:n=304+d;break;
default:n=334+d;
}
	}
	t=c+n;
	x=t%7;
		switch(x)
	{case 1:printf("Sat.");break;

     case 2:printf("Sun.");break;
     case 3:printf("Mon.");break;
     case 4:printf("Tue.");break;
     case 5:printf("Wed.");break;
     case 6:printf("Thu.");break;
	 default:printf("Fri.");
	}
	
	
	return 0;
}