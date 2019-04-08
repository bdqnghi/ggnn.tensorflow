int main()
{
	int N,X,a,b,c,d,e;
	scanf("%d",&N);
	if(N>9999)
      X=5;
	else if(N>999)
		X=4;
	     else if(N>99)
			 X=3;
		      else if(N>9)
				  X=2;
	              else     
				  X=1;
	a=N/10000;
	b=(N-10000*a)/1000;
	c=(N-10000*a-1000*b)/100;
	d=(N-10000*a-1000*b-100*c)/10;
	e=(N-10000*a-1000*b-100*c-10*d);
    switch(X)
	{case 5:printf("%d%d%d%d%d\n",e,d,c,b,a);
	 break;
	 case 4:printf("%d%d%d%d\n",e,d,c,b);
	 break;
	 case 3:printf("%d%d%d\n",e,d,c);
	 break;
	 case 2:printf("%d%d\n",e,d);
	 break;
	 case 1:printf("%d\n",e);
	 break;
	}
    return 0;
}
