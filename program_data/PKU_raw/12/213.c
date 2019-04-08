main()
{
 int a[100][16];
 int z[100]={0};
 int i,j,s,m=0;
 for(i=0;;i++)
 {
	 for(j=0;;j++)
	 {
		 scanf("%d",&a[i][j]);
	     if(a[i][j]==0)
		    break;
		 if(a[i][j]==-1)
		 goto loop;
	 }
 }
loop:for(i=0;a[i][0]!=-1;i++)
 {
	 for(j=0;a[i][j]!=0;j++)
	 {
		 for(s=0;a[i][s]!=0;s++)
			 if(a[i][j]==2*a[i][s])
	           z[i]++;
	 }
	 printf("%d\n",z[i]);
 }
}
  
