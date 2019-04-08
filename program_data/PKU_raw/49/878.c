
main()
{
      char c[500];
      int l,n,i,j,s,p;
      n=0;
      
      gets(c);
      
      for(i=0;c[i]!='\0';i++)
      n++;
      
      for(l=2;l<=n;l++)
      {
                       for(i=0;i<=n;i++)
                       {
                       s=0;
                       
                       for(j=i;j<=(i+l-1);j++)
                       {
                       if(c[j]==c[l+2*i-j-1])
                       s++;}
                       
                       if(s==l)
                       {for(j=i;j<=i+l-1;j++)
                       printf("%c",c[j]);
                       printf("\n");}
                       }
      }
      
      
    

}
    
