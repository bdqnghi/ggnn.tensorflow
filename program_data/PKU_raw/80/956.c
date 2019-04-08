
int mon[12]={0,31,28,31,30,31,30,31,31,30,31,30};

int days(int a,int b,int c)
{
	int result=0,i;
    if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		mon[2]=29;
	else
		mon[2]=28;
	for(i=1;i<b;i++)
		result+=mon[i];
    result+=c;
	return(result);
}

int main()
{
	int a1,b1,c1,a2,b2,c2,sum=0,temp,x;
	int i,j,year;

	scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
	if(a1==a2)
	{
		x=days(a1,b2,c2)-days(a2,b1,c1);
		if(x<0)
			x=-x;
	}
	else
	{
    	if(a2<a1)
		{
		    temp=a1;
	    	a1=a2;
	    	a2=temp;
	    	temp=b1;
	    	b1=b2;
	    	b2=temp;
	    	temp=c1;
	    	c1=c2;
	    	c2=temp;
		}
        for(year=a1;year<a2;year++)
		{
	      	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	    		sum+=366;
	    	else
		    	sum+=365;
		}
        x=sum+days(a2,b2,c2)-days(a1,b1,c1);
	}
	printf("%d",x);
	return;
}