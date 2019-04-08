int main()
{
    char string1[1000];
    char string2[1000];
    gets(string1);
    gets(string2);
    int i,n1,n2;
    n1=strlen(string1);
    n2=strlen(string2);
    for(i=0;i<n1;i++)
    {
                     if(string1[i]>=65&&string1[i]<=90)
                     {
                                                       string1[i]=string1[i]+32;
                     }
                     
                     if(string2[i]>=65&&string2[i]<=90)
                     {
                                                       string2[i]=string2[i]+32;
                     }
    }
    if(strcmp(string1,string2)==0)
    {
                                  printf("=");
    }
    if(strcmp(string1,string2)>0)
    {
                                 printf(">");
    }
    if(strcmp(string1,string2)<0)
    {
                                 printf("<");
     
    }
    return 0;
}                                          
