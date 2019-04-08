void main()
{
	int q=0,m,n,i,k=0,l,s=0,d,t,p=1,h,j,a[100];

	scanf("%d %d",&m,&n);
	for(i=0;i<=n-m;i++)
	{
		t=m+i;
		l=t;

        for(h=0;;h++)
		{
			d=l%10;
			l=l/10;
			s=10*s+d;
			if(l==0)
				break;
		}
		if(s!=t)
			p=0;
		s=0;
		for (j=2; j<=t/2; j++) 
			if(t%j==0)
				p=0;
		if(p==1)
		{
			a[q]=t;
		    q++;
		}
		p=1;
	}
	if(q>0)
	{
		for(i=0;i<q-1;i++)
		printf("%d,",a[i]);
	printf("%d",a[q-1]);
	}
	else printf("no");
}
		
