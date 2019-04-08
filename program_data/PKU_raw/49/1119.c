int main()
{
    char str[510];
    int m,s,i,j,k;
    gets(str); 
    for(j=1;j<strlen(str)-1;j++)
      {
        for(i=0;i<strlen(str);i++)
        {
          m=j+1;
          for(s=i;s<=m/2-1+i;s++)
            if(str[s]!=str[m-s-1+i+i])break;
          if(s==m/2+i)
            {for(s=i;s<=i+j;s++)printf("%c",str[s]);printf("\n");}
        }
      }
    return 0;
}