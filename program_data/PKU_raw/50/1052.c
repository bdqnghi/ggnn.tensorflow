void main()
{
int i,n,a[12];
	scanf("%d",&n);
	a[0]=12;
	for(i=1;i<12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)a[i]=a[i-1]+31;
		else if(i==2)a[i]=a[i-1]+28;
		else a[i]=a[i-1]+30;
	}
	for(i=0;i<12;i++)
	{
		if((a[i]+n)%7==5)printf("%d\n",i+1);
	}
}