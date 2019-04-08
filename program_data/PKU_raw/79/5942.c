void main()
{
	int a[301]={0};int c[21];
    int k,n,m,i,x,j;
    for(k=1;;k++)
	{
	    scanf("%d %d",&n,&m);
	    for(i=1;i<=n;i++)
		{
		    a[i]=1;
		}
	    x=0;
	    for(i=1;i<=n-1;i++)
		{
		   for(j=0;j<m;)
		   {
			   if(x==n)x=1;
			   else x++;
			   if(a[x]==1)j++;
			   else continue;
		   }
		   a[x]=0;
		}
	    for(i=1;i<=n;i++)
		{
		    if(a[i]==1)c[k]=i;
		}
	    if((n==0)||(m==0))break;
	}
	for(m=1;m<k;m++)
		printf("%d\n",c[m]);
}

