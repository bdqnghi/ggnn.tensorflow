void main()
{
     int r,c,i,j,a[100][100],n,t=0;
	 scanf("%d%d",&r,&c);
	 for(i=0;i<r;i++)
		 for(j=0;j<c;j++)
			 scanf("%d",&a[i][j]);

     for(n=0;;n++)
	 {
	     for(j=n;j<c-n;j++,t++)
			 printf("%d\n",a[n][j]);
		 if(t>=r*c)break;
	     for(i=n+1;i<r-n;i++,t++)
			 printf("%d\n",a[i][c-1-n]);
		 if(t>=r*c)break;
         for(j=c-2-n;j>=n;j--,t++)
			 printf("%d\n",a[r-n-1][j]);
		 if(t>=r*c)break;
         for(i=r-2-n;i>n;i--,t++)
             printf("%d\n",a[i][n]);
		 if(t>=r*c)break;
	 }
	 
}   