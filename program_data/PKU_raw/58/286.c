

main()
{
      int n,i;
      scanf("%d",&n);
      getchar();
      for(i=1;i<=n;i++)
      {
             char a[1000];
             int l,j,k;
            gets(a);
            l=strlen(a);
            if((a[0]>='A'&&a[0]<='Z')||a[0]=='_'||(a[0]>='a'&&a[0]<='z'))
            {
               for(k=1;k<l;k++)
              {
               if(a[k]>='A'&&a[k]<='Z');
               else if(a[k]>='0'&&a[k]<='9');
               else if(a[k]=='_');
               else if(a[k]>='a'&&a[k]<='z');                     
               else
                 break;
              }   
            
                       
      
              if(k==l)
              printf("1\n");
              else
               printf("0\n");
           }
           else
           printf("0\n"); 
           }               
}
