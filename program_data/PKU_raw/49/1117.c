main()
{
  int i,j,k,n,bools;
  char s[500];
  gets(s);
  n=strlen(s);
  for(k=2;k<=n;k++)
    for(i=0;i<=n-k;i++)
     { bools=1;
       for(j=i;j<i+k/2;j++)
         if(s[j]!=s[2*i+k-j-1])
          {bools=0;break;}
       if(bools==1)
         { for(j=i;j<=i+k-1;j++)
            printf("%c",s[j]);
           printf("\n");
         }
     }
  return 0;
}
