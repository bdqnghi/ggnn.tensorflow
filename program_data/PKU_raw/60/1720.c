struct couple
{
	int a;
	int b;
	int ans;
}c[M];
int vege(int k)
{
	int i,ans=1;
	if(k==2||k==3)
		ans=1;
	else
	{
		for(i=2;i<k;i++)
		{
			if(k%i==0)
			{
				ans=0;
				break;
			}
		}
	}
	return ans;
}
int main()
{
	int n,i,j=0,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		int ans;
		ans=vege(i);
		if(ans==1)
		{
			c[j].a=i;
			c[j].b=i+2;
			c[j].ans=vege(c[j].b);
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		if(c[i].ans==1)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("empty\n");
	else
	{
		for(i=0;i<j;i++)
		{
			if(c[i].ans==1)
			printf("%d %d\n",c[i].a,c[i].b);
		}
	}
	return 0;
}


		

