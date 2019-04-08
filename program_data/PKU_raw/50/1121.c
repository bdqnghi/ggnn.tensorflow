int main()
{
	int i,j,m,sum[13],da[13]={0},x;
	scanf("%d",&m);
	for(i=1;i<=12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		    sum[i]=31;
		else if(i==2)
			sum[i]=28;
		else sum[i]=30;
	}
	for(i=1;i<=12;i++)
	{
		for(j=1;j<i;j++)
			da[i]+=sum[j];
		da[i]+=12;
	}
	for(i=1;i<=12;i++)
	{
		x=m+da[i]%7;
		if(x==5||x==12)printf("%d\n",i);
	}
}



