main()
{
      char a[10000];int b[10000]={0};
      int i=0,j,p;
      gets(a);
      for(j=0;a[i]!='\0';i++)
      {
                             if(a[i]!=' ')
                             {
                             b[j]++;
                             }
                             else
                             {
                             if(b[j]!=0)
                             printf("%d,",b[j]);
                             j++;
                             }
      }
      printf("%d",b[j]);
    
}
