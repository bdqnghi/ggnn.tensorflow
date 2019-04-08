void func2(char o[],int x)
{
	for (int u=0;u<x;u++)
		o[u]=0;
}
main()
{
	char *p1,*p2;
	char a[100]={0},b[100]={0},d[100]={0},e[100][100]={0};
	int c[100]={0};
	int i,j,k,m,n,g=0,t,v,l;
	scanf("%d\n",&v);
	for (k=0;k<v;k++)
	{
		scanf("%s\n",a);
	    scanf("%s",b);
		p1=a;
		p2=b;
        m=strlen(a);
	    n=strlen(b);
	    for (i=0;i<m-n;i++)
		    d[i]='0';
	    p2=strcat(d,b);
        for (j=m-1;j>=0;j--)
		{
		    c[j]=p1[j]-p2[j]+g;
		    if (c[j]<0)
			{
			    c[j]=c[j]+10;
			    g=-1;
			}
	    	else
		    	g=0;
		    t=m-j;
		    e[k][j]=c[j]+'0';
		}
		for (int h=0;h<m;h++)
		{
			if (e[k][h]=='0')
				e[k][h]=0;
			else
				break;
		}
		func2(a,m);
		func2(b,m);
		func2(d,m);
	}
	for (l=0;l<v;l++)
	    printf("%s\n",e[l]);
}