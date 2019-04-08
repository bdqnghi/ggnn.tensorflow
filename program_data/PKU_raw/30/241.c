main()
{
	int n,i,m,r,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
			continue;
		else{
			m=i;
			while(m!=0)
			{
				r=m%10;
				m=m/10;
				if(r==7) break;
			}
			if(m!=0||r==7) continue;
			else{//printf("i=%d\n",i);
			sum=sum+i*i;}
		}
	}
	printf("%d\n",sum);
}
