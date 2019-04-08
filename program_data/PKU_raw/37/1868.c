main()
{
      int n,j,y,len,k;
      char w, s[100000];
      scanf("%d",&n);
      int i;
      for(i=0;i<n;i++)
      {scanf("%s",s);
       len=strlen(s);
         for(j=0;j<len;j++)
           {for(k=0;k<len;k++)
              {if(k!=j&&s[j]==s[k])
                break;
              }
             if(k==len)
            {printf("%c",s[j]);
             printf("\n");
             break;}
           }         
             if(j==len)
              {printf("no");
              printf("\n");}
       }
        
       
}

