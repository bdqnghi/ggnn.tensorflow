main()
{
    int n,i;
    scanf("%d",&n);
    char ID[n][10];
    int age[n];
    for(i=0;i<=n-1;i++)
    {
      scanf("%s %d",ID[i],&age[i]);
    }
    char ID2[n][10];
    int b[n];
    int j=0,t,k;
    for(i=0;i<=n-1;i++)
    {
     if(age[i]>=60)
     {
     b[j]=age[i];
     strcpy(ID2[j],ID[i]);
     j++;
     }
    }
    char c[10];
    for(k=0;k<j-1;k++)
    {
     for(i=0;i<j-1-k;i++) 
     {
        if(b[i]<b[i+1])
      {
       t=b[i];
       b[i]=b[i+1];
       b[i+1]=t;
       strcpy(c,ID2[i]);
       strcpy(ID2[i],ID2[i+1]);
       strcpy(ID2[i+1],c);
       }
      }
     }
     for(i=0;i<j;i++)
     printf("%s\n",ID2[i]);
     char ID3[n][10];
     int m=0;
     for(i=0;i<n;i++)
     {
      if(age[i]<60)
      {
       strcpy(ID3[m],ID[i]);
       m++;
       }
      }
      for(i=0;i<m;i++)
      printf("%s\n",ID3[i]);
      getchar();
      getchar();
      getchar();
}
