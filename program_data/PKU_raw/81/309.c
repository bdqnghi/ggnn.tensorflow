void main ()
{
     int i,j,n,m;int a[5][5],zz;
     for(i=0;i<5;i++)
	 {   for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
	 }
     scanf("%d %d",&n,&m);
     
	 if(n>=0&&n<5&&m>=0&&m<5)
	 {
        for(i=0;i<5;i++)
		{
			zz=a[n][i];a[n][i]=a[m][i];a[m][i]=zz;
		}
		for(i=0;i<5;i++)
		{
           for(j=0;j<5;j++)
		   {
             printf("%d",a[i][j]);
             if(j<4) printf(" ");
		   }
         printf("\n");
		}
	 }
     else printf("error\n");	 
}
