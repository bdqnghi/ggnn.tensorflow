main()
{
    for(int j=0;j<6;j++)
    {
            char a[10];
    scanf("%s",a);
    if(a[0]=='-')
    {
      int k=strlen(a),p=0;
      printf("-");
      for (int i=k-1;i>=1;i--)
      {
          if (a[i]!='0')
          {
             p++;
          }
          if(p!=0) printf("%c",a[i]); 
      } 
    }
    else
    {
      int k=strlen(a),p=0;
      for (int i=k-1;i>=0;i--)
      {
          if (a[i]!='0')
          {
             p++;
          }
          if(p!=0) printf("%c",a[i]); 
      }
    }
    printf("\n");
}
}
