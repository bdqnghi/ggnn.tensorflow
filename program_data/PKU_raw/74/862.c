void main()
{
	int m,n,i,p,flag,a,ok,w,b;
	scanf("%d %d",&m,&n);
	ok=1;
	for(i=m;i<=n;i++)
	{
		a=0;
		flag=1;
		for(p=2;p<=i/2;p++)
		{
			if(i%p==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			continue;
		w=i;
		while(w)
		{
			b=w%10;
			a=a*10+b;
			w=w/10;
		}
		if(a==i)
		{
			printf((!ok)?",%d":"%d",i);
			ok=0;
		}
	}
	if(ok==1)
		printf("no");
}
