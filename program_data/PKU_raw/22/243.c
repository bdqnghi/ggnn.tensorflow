void main()
{
	char a[1500];
	int i,j,k,m,n,t,x[300],y[300],l[300],s[300],w[300]={0},p,q;
	for (i=0;i<1500;i++)
	{
		a[i]=getchar();
		if (a[i]=='\n')
			break;
	}
    m=0;
	n=1;
	y[0]=0;
	for (j=0;j<i;j++)
    {
        if (a[j]!=','&&(a[j+1]==','||a[j+1]=='\n'))
		{
			x[m]=j+1;
			m++;
		}
    }
	for (k=1;k<i;k++)
	{
		if (a[k]==','&&a[k+1]!=',')
		{
            y[n]=k+1;
			n++;
		}
	}
	for (t=0;t<m;t++)
		l[t]=x[t]-y[t];
	for (t=0;t<m;t++)
	{
		if (l[t]==1)
			s[t]=a[y[t]]-48;
		if (l[t]==2)
			s[t]=(a[y[t]]-48)*10+(a[y[t]+1]-48);
		if (l[t]==3)
			s[t]=(a[y[t]]-48)*100+(a[y[t]+1]-48)*10+(a[y[t]+2]-48);
		if (l[t]==4)
            s[t]=(a[y[t]]-48)*1000+(a[y[t]+1]-48)*100+(a[y[t]+2]-48)*10+(a[y[t]+3]-48);
	}
	p=0;
	for (i=0;i<m;i++)
	{
		if (s[i]==s[0])
			p++;
		for (j=0;j<m;j++)
		{
			if (s[i]>=s[j])
				w[i]++;
		}
	}
	if (t==0||p==m)
		printf("No\n");
    q=0;
	for (i=0;i<m;i++)
	{
		if (w[i]==m)
			q++;
	}
	for (i=0;i<m;i++)
	{
		if (w[i]==m-q)
		{
			printf("%d\n",s[i]);
		    break;
		}
	}
}