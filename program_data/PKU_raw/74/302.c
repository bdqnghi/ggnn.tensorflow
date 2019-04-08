
int main(void)
{
	int m,i,n,a,num=0,p,q,su;
	scanf("%d %d",&m,&n);
	for(a=m;a<=n;a++)
	{   su=1;
		for(i=2;i<a/2;i++)
		{
			if(a%i==0)
			{
				su=0;
				break;
			}
		}
		if(su==0)
			continue;
		else
		{
			p=a;
			q=0;
			while(p>0)
			{
				q=q*10+p%10;
				p/=10;
			}
			if(q==a)
			{
				num++;
				if(num==1)
					printf("%d",a);
				if(num>1)
					printf(",%d",a);
			}
		}
	}
	if(num==0)
		printf("no");
}

