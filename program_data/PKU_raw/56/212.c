int main ( )
{ 
	int x,y,a1,a2,a3,a4,a5,i=1;
	for(;i<=4;i=i+1)
	{
    scanf("%d\n",&x);
	a1=x/10000;
	a2=(x-a1*10000)/1000;
	a3=(x-a1*10000-a2*1000)/100;
	a4=(x-a1*10000-a2*1000-a3*100)/10;
	a5=(x-a1*10000-a2*1000-a3*100-a4*10);
	if (a1!=0)
	   y=a5*10000+a4*1000+a3*100+a2*10+a1;
	else
		if (a2!=0)
			y=a5*1000+a4*100+a3*10+a2;
		else
			if (a3!=0)
				y=a5*100+a4*10+a3;
			else 
				if (a4!=0)
					y=a5*10+a4;
				else
					y=a5;
	printf("%d\n",y);
	}
         return 0;
}
