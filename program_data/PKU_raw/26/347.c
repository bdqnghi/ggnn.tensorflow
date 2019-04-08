int main()
{
    char str[1000],str1[1000];
    int i,j=0;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {if(str[i]!=' '||str[i+1]!=' ')
    {str1[j]=str[i];j++;}
}
  for(i=0;i<j;i++)
  {printf("%c",str1[i]);}
getchar();
getchar();
}
