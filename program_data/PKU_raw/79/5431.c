main()
{
	int a[300],b[300];
	int m,n,c=0,d=1,i,k,j=0,l,p;
	
   for(j=0;;j++) 
   {
	   scanf("%d %d",&n,&m);
	   if ((m==0)&&(n==0)) 
		   break;
	   for (i=1;i<=n;)
	{
        a[i]=i;
		i++;
	}
	i=n;
	a[n+1]=0;
		for (d=1;i>1;)
		{
			l=d+m-1;
			c=l/i;
			d=-i*c+l;
		while(d<=0)	 
			d=d+i;
			for (k=d;k<i;)
			{
				a[k]=a[k+1];
				k++;
			}
			a[i]=0;
			i--;
		}
		b[j]=a[1];
   }
   for (p=0;p<j;p++)
       printf("%d\n",b[p]);
	return 0;
}