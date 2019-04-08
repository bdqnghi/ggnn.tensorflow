int reverse(int num); 
void main()
{
	int a[10],i;
	int b[10];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);}
	for(i=0;i<6;i++)
	{
		b[i]=reverse(a[i]);
	printf("%d\n",b[i]);
	}
}
int reverse(int num) 
{int x,y,z;
	if(num<0)
	{
		x=-num;
	if(x>0&&x<10)
		return(-x);
	if(x>=10&&x<=99)
	{z=(x-(x/10)*10)*10+x/10;
	return(-z);}
	if(x>=100&&x<999)
	{z=(x-(x/10)*10)*100+(x/10-(x/100)*10)*10+x/100;
	return(-z);
	}
	if(x>=1000&&x<9999)
	{z=(x-(x/10)*10)*1000+(x/10-(x/100)*10)*100+(x/100-(x/1000)*10)*10+x/1000;
	return(-z);
	}
	if(x>=10000&&x<99999)
	{z=(x-(x/10)*10)*10000+(x/10-(x/100)*10)*1000+(x/100-(x/1000)*10)*100+(x/1000-(x/10000)*10)*10+x/10000;
	return(-z);
	}
	}
    if(num==-0||num==0)
		return(0);
	if(num>0&&num<10)
		return(num);
	if(num>=10&&num<=99)
	{   y=num;
		z=(y-(y/10)*10)*10+y/10;
	return(z);}
	if(num>=100&&num<999)
	{    y=num;
		z=(y-(y/10)*10)*100+(y/10-(y/100)*10)*10+y/100;
	return(z);
	}
	if(num>=1000&&num<9999)
	{   y=num;
		z=(y-(y/10)*10)*1000+(y/10-(y/100)*10)*100+(y/100-(y/1000)*10)*10+y/1000;
	return(z);
	}
	if(num>=10000&&num<99999)
	{    y=num;
		z=(y-(y/10)*10)*10000+(y/10-(y/100)*10)*1000+(y/100-(y/1000)*10)*100+(y/1000-(y/10000)*10)*10+y/10000;
	return(z);
	}
}

	