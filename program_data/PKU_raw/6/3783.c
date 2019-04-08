int main()
{
    int k,n,m,i,j,a[100][100],s,q[100],h1,h2,t,l1,l2,c;
    scanf("%d",&k);
    for(i=1,t=0;i<=k,t<k;i++,t++)
      {  h1=0,h2=0,t,l1=0,l2=0;  
        scanf("%d%d",&m,&n);
		
		if(n==1&&m==1)
		{	scanf("%d",&a[0][0]);
	    q[t]=a[0][0];}
	   
		if(m==1&&n>1)
		{	
		   for(i=0;i<n;i++)
				scanf("%d",&a[0][i]);

           for(c=0,i=0;i<n;i++)
			c=c+a[0][i];
		   q[t]=c;
		}
        
		if(n>1&&m>1)
        {for(i=0;i<m;i++)
        { for(j=0;j<n;j++)
          {scanf("%d",&a[i][j]);}}//wan cheng shu ru
        for(j=0;j<n;j++)
            {h1=h1+a[0][j];}
        for(j=0;j<n;j++)
            {h2=h2+a[m-1][j];}
        for(i=1;i<m-1;i++)
            {l1=l1+a[i][0];}
        for(i=1;i<m-1;i++)
            {l2=l2+a[i][n-1];}
		q[t]=h1+h2+l1+l2; }
       
		if(n==1&&m>1)
		{	
		   for(i=0;i<m;i++)
				scanf("%d",&a[i][0]);

           for(c=0,i=0;i<m;i++)
			c=c+a[i][0];
		   q[t]=c;
		}
        }
        
        
        for(i=0;i<k;i++)
            {printf("%d\n",q[i]);}
                return 0;
}