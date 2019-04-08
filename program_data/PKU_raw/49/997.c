int main()
{   int check(char str[]);
    char string[1000];
    gets(string);
    int n,i;
    n=strlen(string);
    int j;
    int k,m;
    int w=0;
    int r;
    char str2[1000];
    for(j=2;j<n;j++)
    {
                 for(m=0;m<=n-j;m++)
                 {
                                 for(k=m;k<m+j;k++)
                                 {
                                                 str2[w]=string[k];
                                                 w++;
                                                 str2[w]='\0';
                                                 if(k==n)
                                                 break;
                                 }
                                 r=check(str2);
                                 if(r==1)
                                 {
                                 printf("%s\n", str2);
                                 }
                                 w=0;
                 }
    }
    return 0;
}

          int check(char str[])
    {
        int n;
        char str1[1000];
        strcpy(str1,str);
        n=strlen(str);
        int i;
        char c;
        for(i=0;i<=(n-1)/2;i++)
        {
               c=str[i];
               str[i]=str[n-1-i];
               str[n-1-i]=c;
        }
        if(strcmp(str,str1)==0)
        return 1;
        else
        return 0;
        }           
        
