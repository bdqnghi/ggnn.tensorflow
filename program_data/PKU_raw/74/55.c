void judge_huiwen(int n,int t[])
{
	if(n/10==0)
		t[0]=10*t[0]+n;
	else if(n/10!=0)
	{
		t[0]=n%10+10*t[0];
		n=n/10;
		judge_huiwen(n,t);
	}
}

void judge_sushu(int n,int t[])
{
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
		{
			t[1]=1;
			break;
		}
}

void main()
{
	int m,n,i,t[2]={0},x=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		judge_huiwen(i,t);
		judge_sushu(i,t);
		if((t[0]==i)&&(t[1]==0))
		{
			printf("%d",i);
			x=1;
			break;
		}
		t[0]=0;
		t[1]=0;
	}
	for(i=i+1;i<=n;i++)
	{
		judge_huiwen(i,t);
		judge_sushu(i,t);
		if(t[0]==i&&t[1]==0)
			printf(",%d",i);
		t[0]=0;
		t[1]=0;
	}
	if(x==0)
		printf("no");
	printf("\n");
}