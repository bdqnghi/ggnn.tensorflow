int u[100],p[100],w[100];
int main()
{
	int n,i,j,sum=0,e;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&u[i],&p[i],&w[i]);
		if(p[i]>w[i])
		{
			e=p[i];
			p[i]=w[i];
			w[i]=e;
		}
		for(j=p[i];j<w[i];j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				sum+=3;
			if(j==4||j==6||j==9||j==11)
				sum+=2;
			if(j==2&&u[i]%4==0&&u[i]%100!=0)
				sum+=1;
			if(j==2&&u[i]%400==0)
				sum+=1;
			if(j==2&&u[i]%4!=0)
				sum+=0;
			if(j==2&&u[i]%100==0&&u[i]%400!=0)
				sum+=0;
		}
		if(sum%7==0)
		{
			printf("YES\n");
			sum=0;
		}
		else
		{
			printf("NO\n");
			sum=0;
		}
	}
	return 0;
}

