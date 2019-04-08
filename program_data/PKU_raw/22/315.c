void main()
{
	char in[10000],num[300][4];
	int n,i,j=0,k=0,e=0,w[300],z[300],m[100],q[100];
	gets(in);
	n=strlen(in);
	for(i=0;i<n;i++)
	{
		if(in[i]!=',')
	    {
	    	num[k][j]=in[i];
	        j++;
	    }
	else {
		  k++;j=0;
		 }
	}
	if(k==0)
		printf("No\n");
	else
{
		{
		for(i=0;i<=k;i++)
		{
			w[i]=strlen(num[i]);
	        for(e=0,z[i]=0;e<w[i];e++)
		    z[i]=z[i]+(num[i][e]-'0')*pow(10,w[i]-e-1);
		}
	}	
    for(i=0;i<=k;i++)
    {
    	m[i]=0;
    	for(j=0;j<=k;j++)
    	{if(z[j]>z[i])
    	m[i]=1;}
    }
    for(i=0;i<=k;i++)
    {
    	if(m[i]==0)
    	z[i]=-1;
    }
    for(i=0;i<=k;i++)
    {
    	q[i]=0;
    	for(j=0;j<=k;j++)
    	{if(z[j]>z[i])
    	q[i]=1;}
    }
    for(i=0;i<=k;i++)
    {
    	if(q[i]==0&&z[i]!=-1)
    	{printf("%d",z[i]);break;}
    	else if(q[i]==0&&z[i]==-1)
    	{printf("No\n");break;}
    }
}
}