main()
{
      int i,j,n,m=0;
      scanf("%d",&n);
      int a[2][n];
      for(i=0;i<n;i++){a[0][i]=0;a[1][i]=0;}
      for(;;){
      scanf("%d %d",&i,&j);
      if(i==0&&j==0){break;}
      else
      a[0][i]++;
      a[1][j]++;}
      for(i=0;i<n;i++){
      if(a[0][i]==0&&a[1][i]==(n-1)){
      printf("%d",i);m++;}}
      if(m==0)printf("NOT FOUND");
}
