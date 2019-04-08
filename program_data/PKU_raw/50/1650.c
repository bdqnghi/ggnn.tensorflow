int dijitian(int m,int d)
{
	int i,sum=0;
	for(i=1;i<=m-1;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			sum+=31;
		}
		if(i==2)
		{
			sum+=28;
		}
		if(i==4||i==6||i==9||i==11)
		{
			sum+=30;
		}
	}
	sum+=d;
	return sum;
}
int main()
{
	int w,k,i,p;
	scanf("%d",&w);
	for(i=1;i<=12;i++)
	{
		k=dijitian(i,13)-dijitian(1,1);
		p=k;
		while(p>=7)
		{
			p=p-7;
		}
		if(((p+w)%7)==5)
		{
			printf("%d\n",i);
		}
		
	}
	return 0;
}

 
 
 
