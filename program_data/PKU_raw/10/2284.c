void main()
{
	int k;
	scanf("%d",&k);
	if(k==1)
	 printf("1\n");
	else if(k>=2)
	{
		int a[25],i,b[25],c[25],j,p=0,m,n,t=0;
	scanf("%d",&a[0]);
	for(i=1;i<k;i++)
		scanf(" %d",&a[i]);
	    b[0]=1;
     for(i=k-2;i>=0;i--)
	 { 
		 for(j=i+1;j<=k-1;j++)
		 {
			 if(a[i]>=a[j])
			 { c[p]=b[k-1-j];
			 p++;}
             for(m=0;m<p;m++)
			 { if(c[m]>t)
			     t=c[m];
			 }
		 }
		 b[k-1-i]=t+1;
		 p=0;
		 t=0;
         for(m=0;m<p;m++)
			 c[m]=0;
	 }
	 for(n=0;n<k;n++)
	 { if(b[n]>t)
	    t=b[n];}
	 printf("%d\n",t);
	}
}
    

