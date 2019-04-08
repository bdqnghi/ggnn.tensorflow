main()
{
      int n,i,j;
      char s[10];
      float k;
      scanf("%d",&n);
      struct 
      {
      char sex[10];
      float hei;
      } peo[n];
      for(i=0;i<n;i++)
      scanf("%s %f",peo[i].sex,&peo[i].hei);
      for(i=1;i<=n;i++)
      for(j=n-1;j>=i;j--)
      if(peo[j].hei<peo[j-1].hei)
      {
          k=peo[j].hei;
          peo[j].hei=peo[j-1].hei;
          peo[j-1].hei=k;
          strcpy(s,peo[j].sex);
          strcpy(peo[j].sex,peo[j-1].sex);
          strcpy(peo[j-1].sex,s);
      }
      for(i=0;i<n;i++)
      if(strcmp(peo[i].sex,"male")==0)
      {printf("%.2f",peo[i].hei);break;}
      for(i=i+1;i<n;i++)
      if(strcmp(peo[i].sex,"male")==0)
      printf(" %.2f",peo[i].hei);
      
      for(i=n-1;i>=0;i--)
      if(strcmp(peo[i].sex,"female")==0)
      printf(" %.2f",peo[i].hei);
}