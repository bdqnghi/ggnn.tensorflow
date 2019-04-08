int main()
{
    int n,i,j,m,sign1,sign2;
    char s[30];
    gets(s);
    m=strlen(s);
    sign1=0;sign2=0;
    for(i=0;i<m;i++)
    {
      if(s[i]>='0'&&s[i]<='9')
      printf("%c",s[i]);
      else if(s[i]<'0'||s[i]>'9')
        if(s[i-1]>='0'&&s[i-1]<='9')
        printf("\n");
                   
      
    }
      return 0;
}
    
