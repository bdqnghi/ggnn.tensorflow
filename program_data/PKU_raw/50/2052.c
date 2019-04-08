int main()
{
	int a[12]={0},w,i,j,d=0;
	scanf("%d",&w);
	for(i=0;i<12;i++)
	{
		for(j=1;j<i+1;j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10)
				a[i]=a[i]+31;
			if(j==2)
				a[i]+=28;
			if(j==4||j==6||j==9||j==11)
				a[i]+=30;
			
		}
		a[i]+=13;
	}
	d=7-w+5+1;
	while(d<=365)
	{
		for(i=0;i<12;i++)
			if(d==a[i])printf("%d\n",i+1);
		d+=7;
	}
	return 0;

}