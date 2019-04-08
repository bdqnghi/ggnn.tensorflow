int check(char a[100])
{
    int t=strlen(a),i,j=1;
    if((a[0]>='a'&&a[0]<='z')||a[0]=='_')
    { 
                                        
                                         if(t==1)
                                         return 1;
                                         for(i=1;i<t;i++)
                                         {
                                                         if(a[i]==' ')
                                                         return 0;
                                         if((a[i]>='a'&&a[i]<='z')||a[i]=='_'||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))
                                         j++;
                                         }
                                         
    }
    else if(a[0]>='A'&&a[0]<='Z')
    {
    if(t==1)
    return 1;
    for(i=1;i<t;i++)
    if((a[i]>='a'&&a[i]<='z')||a[i]=='_'||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9'))
                                         j++;
                                         }
                                         else 
                                         return 0;
                                         if(j==i)
                                         return 1;
                                         else 
                                         return 0;
}
main()
{
      int n,i;
      char a[100];
      scanf("%d",&n);
      gets(a);
      for(i=0;i<n;i++)
      {
      gets(a);
      int k=check(a);
      printf("%d\n",k);
      }
      getchar();
}
