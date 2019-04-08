void main()
{
	int po[500]={0};
	char c[1000]={0},ca[5]={0};
	int max,n=0,nc,ns,j,a=0,p=0,i,same,k,nsame[500]={0};
	n=getchar()-'1'+1;
	getchar();
	gets(c);
	i=0;
	nc=0;
	while(c[nc]!=0) nc++;
	ns=0;
	for(i=0;i<nc-n+1;i++)
	{
		for(j=0;j<n;j++)
			ca[j]=c[j+i];
		for(k=0;k<nc-n+1;k++)
		{
		    same=1;
		    for(j=0;j<n;j++)
			{
			    if(ca[j]!=c[k+j]) same=0;
			}
			if(same==1)
			{
				nsame[i]++;
				if(k>i) po[k]=1;
			}
		}
	}
	max=0;
	for(i=0;i<nc-n+1;i++)
	{
		if(nsame[i]>1)
		{
			p=1;
			if(nsame[i]>max) max=nsame[i];
		}
	}
	if(p==1)
	{
	    printf("%d\n",max);
		for(i=0;i<nc-n+1;i++)
		{
			if(nsame[i]==max&&po[i]==0)
			{
				for(j=0;j<n;j++) printf("%c",c[i+j]);
				printf("\n");
			}
		}
	}
	else printf("NO");
}