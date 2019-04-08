int huiwen(int num)
{
	int i,*shuwei,number,gao=0,t=1,a,z;
	number=num;
	for(;;)
		if(num/10!=0)
		{
			gao++;
			num=num/10;
		}
		else break;
	shuwei=(int*)calloc(gao+1,4);
		for(i=gao+1;i>=1;i--)
		{
			shuwei[i-1]=number/pow(10,i-1);
			a=number/pow(10,i-1);
			number=number-a*pow(10,i-1);
		}
		for(i=1;i<=gao+1;i++)
			if(shuwei[i-1]!=shuwei[gao+1-i])
			{
				t=0;
				break;
			}
		if(t==1)
			z=1;
		else
			z=0;
		free(shuwei);
		return z;
}

int main()
{
	int num,i=1,j,m,n,a[1000]={0},t[1000]={0},w=0;
	scanf("%d %d",&m,&n);
	for(num=m;num<=n;num++)
		if(huiwen(num)==1)
		{
			a[i-1]=num;
			i++;
		}
	for(i=1;i<=1000;i++)
		if(a[i-1]!=0)
			for(j=2;j<a[i-1];j++)
				if(a[i-1]%j==0)
				{
					t[i-1]=1;
					break;
				}
	for(i=1;i<=1000;i++)
		if(a[i-1]!=0&&t[i-1]==0)
		{
			printf("%d",a[i-1]);
			w=1;
			break;
		}
	for(j=i+1;j<=1000;j++)
		if(a[j-1]!=0&&t[j-1]==0)
			printf(",%d",a[j-1]);
	if(w==0)
		printf("no");
}


