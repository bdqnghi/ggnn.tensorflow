

void charu(char str[10],char substr[4],int n)
{
    int i,k;
    char nstr[13];
    char max;
    
    for(i=n;i>=0;i--)
    {if(str[i]>=max)
    {max=str[i];
    k=i;}}
    
    for(i=0;i<=k;i++)
    nstr[i]=str[i];
    for(i=0;i<=2;i++)
    nstr[i+k+1]=substr[i];
    for(i=k+4;i<=n+3;i++)
    nstr[i]=str[i-3];

    puts(nstr);
    
}   

main()
{
      char s1[10],s2[4];
      int i;
      
      while (scanf("%s%s",s1,s2)!=EOF)
      {
      for(i=0;s1[i]!='\0';i++);
      charu(s1,s2,i);
      }
      

}
      
      
