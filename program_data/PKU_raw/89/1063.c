main()
{
      int n,i,k=0,a,b;
      int str[10000]={0},f[10000]={0};
      scanf("%d",&n);
      for(;;)
      {
             scanf("%d %d",&a,&b);
             if(a==0&&b==0) break;
             str[b]+=a;
             f[a]++;
      }
      for(i=0;i<n;i++)
      {
                      if(str[i]==((n-1)*n/2-i)&&f[i]==0)
                      {printf("%d",i);k++;}
      }
      if(k==0) printf("NOT FOUND");
      printf("\n");

}
