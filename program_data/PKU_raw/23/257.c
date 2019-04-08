int main()
{
    char str[101];
    int n,i=99,j;
    gets(str);
    while(i>=0)
    {
        n=strlen(str);
        if(str[i]==' ')
        {
           j=i+1;
           while(j<n)
           {printf("%c",str[j]);
            j=j+1;}
          printf(" ");
          str[i]='\0';
         }
        if(i==0)
        puts(str);
        i=i-1;
     }
     return 0;
}
