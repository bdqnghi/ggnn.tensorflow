void main()
{
   int   a,b,c,d,x,y; 
   scanf("%d",&x) ;
   a=x/1000;
   b=(x-a*1000)/100;
   c=(x-a*1000-b*100)/10;
   d=x-a*1000-b*100-c*10;
   if(a==0)
	   if(b==0)
		   if(c==0)
			   y=d;
		   else y=d*10+c;
		else y=d*100+c*10+b;
	else y=d*1000+c*100+b*10+a;
	if(d==0)
		if(c==0)
			if(b==0)
				if(a==0)
					printf("0");
				else printf("000%d",y);
			else printf("00%d",y);
		else printf("0%d",y);
	else printf( "%d",y); 
} 
