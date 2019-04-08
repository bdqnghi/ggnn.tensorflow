main()
{
	int N(int y);
	int Z(int y);
	int m,n,y,a,b;
	scanf("%d %d",&m,&n);
	y=m;
	a=N(y);	b=Z(y);
    
	while((a!=y || b!=1) && y<=n) 
	{ y=y+1;a=N(y);	b=Z(y);}
	if(y==n+1) printf("no");
	else printf("%d",y);
	  m=y;
	for(y=m+1;y<=n;y++) 
	{
		a=N(y);	b=Z(y);
		if(a==y && b==1) 
		{printf(",%d",y);}
	}
	
	printf("\n");
}


int Z(int y)
{
   int i,b;
   for(i=2;i<=y;i++)
	{
		b=y%i;
		if(b==0)  break;
	}
	if(i==y)  b=1;
         else b=0;
  return(b);
}

int N(int y)
{
 long f=0,a=0,b=0,c=0,d=0,e,n=1,x;
 e=y%10;y=(y-e)/10;
 if(y>0) {d=y%10;y=(y-d)/10;}
 if(y>0) {c=y%10;y=(y-c)/10;}
 if(y>0) {b=y%10;y=(y-b)/10;}
 if(y>0) {a=y%10;y=(y-a)/10;}
 if(y>0) f=y%10;


 if(f!=0) x=100000*e+10000*d+1000*c+100*b+10*a+f;
 else 
   if(a!=0) x=10000*e+1000*d+100*c+10*b+a;
   else 
      if(b!=0) x=1000*e+100*d+10*c+b;
      else 
         if(c!=0) x=100*e+10*d+c;
         else 
		    if(d!=0) x=10*e+d;
			else y=e;
 return(x);
} 