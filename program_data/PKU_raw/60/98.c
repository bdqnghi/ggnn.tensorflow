void main()
{
	int n,i,j,k=0,t=0,s=0,a[100000];
	scanf("%d",&n);
	  for(j=3;j<=n;j++)
	  {
		for(i=2;i<=sqrt(j);i++)
			if(j%i!=0)
				k=0;
			else
			{
				k=1;break;
			}
		if(k==1)
			continue;
		else
		{
			a[t]=j;t++;
		}
	  }
//	for(i=0;i<t;i++)
//		printf("%d ",a[i]);

	  for(i=0;i<t-1;i++)
		if((a[i+1]-a[i])==2)
		{
			printf("%d %d\n",a[i],a[i+1]);
			s++;
		}
		else
			continue;
	  if(s==0)
		printf("empty\n");
}



