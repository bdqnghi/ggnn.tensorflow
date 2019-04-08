int main()
{
    char str1[1000],str2[1000],c;
    int n1,n2;
    scanf("%s%s",str1,str2);
    n1=strlen(str1);
    n2=strlen(str2);
    for(int i=0;i<n1;i++)
        for(int j=0;j<n1-i-1;j++)
            if(str1[j]>str1[j+1]) {c=str1[j];str1[j]=str1[j+1];str1[j+1]=c;}
    for(int i=0;i<n2;i++)
        for(int j=0;j<n2-i-1;j++)
            if(str2[j]>str2[j+1]) {c=str2[j];str2[j]=str2[j+1];str2[j+1]=c;}
    if(strcmp(str1,str2)==0) printf("YES\n");
    else printf("NO\n");
}