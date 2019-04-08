void main()
{
	int sushu(int x);
	int huiwen(int x);
	int m,n,i,j,f=0,a[100];
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(sushu(i)==1&&huiwen(i)==1)
		{
			a[f]=i;f++;
		}
	}
	if(f==0)printf("no\n");
	else
	{
		for(j=0;j<(f-1);j++)
		{
			printf("%d,",a[j]);
		}
		printf("%d",a[f-1]);
	}
}
int sushu(int x)
{
	int flag1,k,a;
	k=sqrt(x);
	for(a=2;a<=k;a++){if(x%a==0)break;}
	if(a>k){flag1=1;}
	else {flag1=0;}
	return(flag1);
}
int huiwen(int x)
{
	int a[9],d,j,b,c,k,e,y,sum=0,cha,flag2;
	d=9;
	k=pow(10,d);
	while((x/k)==0)
	{
		d--;
		k=pow(10,d);
	}
	for(j=0;j<=d;j++)
	{
		b=pow(10,j+1);
		c=pow(10,j);
		a[j]=(x%b-x%c)/c;
	}
	for(j=0;j<=d;j++)
	{
		e=pow(10,d-j);
		y=a[j]*e;
		sum=sum+y;
	}
	cha=x-sum;
	if(cha==0)flag2=1;
	else flag2=0;
	return (flag2);
}

