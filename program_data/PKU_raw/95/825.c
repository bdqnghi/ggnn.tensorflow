
int main()
{
    char str1[80],str2[80];
    char c;
    int i;
    gets(str1);
    gets(str2);
    for (i=0;i<80;i++)
    {
        if (str1[i]>64&&str1[i]<91)
            str1[i]+=32;
        if (str2[i]>64&&str2[i]<91)
            str2[i]+=32;   
    }
    if (strcmp(str1,str2)>0) printf(">");
    else if (strcmp(str1,str2)==0) printf("=");
    else printf("<");
    
    return 0;
}
