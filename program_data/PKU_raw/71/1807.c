void main()
{
	int n,x[MAX],a[MAX],b[MAX],c,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&x[i],&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
        if(x[i]%4==0 && x[i]%100!=0 || x[i]%400==0)
		{
			if(a[i]>b[i])
			{
				c=a[i];
				a[i]=b[i];
				b[i]=c;
			}
			if((a[i]==1&&b[i]==4)||(a[i]==2&&b[i]==8)||(a[i]==1&&b[i]==7)||(a[i]==3&&b[i]==11)||(a[i]==4&&b[i]==7)||(a[i]==9&&b[i]==12))
				printf("YES\n");
			else printf("NO\n");
		}
		else
		{
            if(a[i]>b[i])
			{
				c=a[i];
				a[i]=b[i];
				b[i]=c;
			}
			if((a[i]==1&&b[i]==10)||(a[i]==2&&b[i]==3)||(a[i]==2&&b[i]==11)||(a[i]==3&&b[i]==11)||(a[i]==4&&b[i]==7)||(a[i]==9&&b[i]==12))
				printf("YES\n");
			else printf("NO\n");
		}
	}
}
