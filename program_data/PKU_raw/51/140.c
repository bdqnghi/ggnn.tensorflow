void main()
{
	int n,i,j=0,s,t=0,m,q=0,d[250];char a[500],b[250][5];
	scanf("%d %s",&n,a);
	s=strlen(a);
    for(i=0;i<=s-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
		b[i][n]=0;
	}
	
	for(i=0;i<=s-n;i++)
	{
		m=0;
		for(j=i+1;j<=s-n;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				if(m==0)m=2;
			    else m=m+1;
			}
		}
		d[i]=m;
		if(d[i]>q)q=d[i];
	}
	if(q==0){printf("NO");}
	else 
	{
		printf("%d\n",q);
		for(i=0;i<=s-n;i++)
		{
			if(d[i]==q)printf("%s\n",b[i]);
		}
	}
}
	