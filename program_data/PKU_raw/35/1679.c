int main()
{
 int a[8][8],i,j,t,k,max,min,l=0;
 int N,M;
 scanf("%d,%d",&N,&M);
 for(i=0;i<N;i++)
 {
     for (j=0;j<M;j++)
	 {
         scanf("%d",&a[i][j]);
	 }
 }
 for(i=0;i<N;i++)
 { 
     max=a[i][0];k=0;
     for(j=1;j<M;j++)
	 {
         if (a[i][j]>max)
		 {
             max=a[i][j];
	         k=j;
		 }
	 }
     min=a[0][k];
     for (t=1;t<N;t++)
	 {
         if (a[t][k]<min)
		 {
             min=a[t][k];
		 }
	 }
     if (max==min)
	 {
	     printf("%d+%d",i,k);
         l++;
	 }
 }
 if(l==0)
 {
     printf("No\n");
 }
 return 0;
} 