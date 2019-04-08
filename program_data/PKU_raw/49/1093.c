main()
{   int  i,j,k,n,m,l,o;
     char s[501];
     gets(s);
     l=strlen(s);
     for(n=2;n<=l;n++)
    { for(i=0;i<=l-n;i++)
     
     for(m=i,o=i+n-1;s[m]==s[o];m++,o--)
      
 
    if(m>=o)
     
     {for(j=i;j<=i+n-1;j++)
      printf("%c",s[j]);
     
     printf("\n");break;
     }
}
}