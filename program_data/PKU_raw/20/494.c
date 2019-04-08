int main()
{
    int max,i,k;
    char str1[20],str2[20];
    while(scanf("%s %s",str1,str2)!=EOF)
    {
     max=0;
     for(i=0;*(str1+i)!='\0';i++)
     if(*(str1+i)>max)
      {max=*(str1+i);
      k=i;}
    for(i=0;i<=k;i++)
    printf("%c",*(str1+i));
    printf("%s",str2);
    for(i=k+1;*(str1+i)!='\0';i++)
    printf("%c",*(str1+i));
    printf("%c",'\n');
    }
}