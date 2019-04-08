main()
{
      int n,bei[10000]={0},renshi[10000]={0},i,x,y,k=0;
      scanf("%d",&n);
      for(;;)
      {
             scanf("%d%d",&x,&y);
             if(x==0&&y==0){break;}
             bei[y]++;
             renshi[x]++;
      }
      for(i=0;i<n;i++)
      {
           if(bei[i]>=(n-1)&&renshi[i]==0)
           {printf("%d",i);k++;}
      }
      if(k==0 )
      {printf("NOT FOUND");}
}