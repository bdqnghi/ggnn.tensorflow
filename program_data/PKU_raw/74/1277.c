void main()
{
	int a,b,c,d,temp,k,i,flag=0;
	scanf("%d %d",&a,&b);
	for(;a<=b;a++)
	{
		temp=a;d=0;
		while(temp>0)
		{
			c=temp%10;
			d=d*10+c;
			temp=temp/10;
		}
		if(d==a)
		{
			k=sqrt(d);
			for(i=2;i<=k;i++)
			{
				if(d%i==0)
				break;
			}
			if(i>=k+1)
			{
				flag=flag+1;
				if(flag==1)
					printf("%d",d);
				else
					printf(",%d",d);
			}
		}
	}
	if(flag==0)
		printf("no");
}
