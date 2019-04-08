void main()
{
	char c[100]={0},c1,c2;
	int p[100]={0},i,n=0,j,m;
	gets(c);
	i=0;
    c1=c[0];
	c2=c[1];
	while (c[i]!=0)
	{
		if(c[i]==c1) p[i]=1;
		else p[i]=-1;
		i++;
        n++;
	}
	do
	{
        m=0;
		for(i=0;i<n-1;i++)
		{
            j=i+1;
			while(p[j]==0) j++;
			if(p[i]*p[j]==-1)
            {
				p[i]=p[j]=0;
				printf("%d %d\n",i,j);
				m=1;
				break;
			}
		}
	}while(m==1);
}