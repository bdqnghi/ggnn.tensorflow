main()
{   char s[100],a[100]={'\0'},b[100]={'\0'},c,d;
    int len1,len2,i,j,k,x;
    gets(s);
    for(i=0;s[i]!=' ';i++)
    a[i]=s[i];
    for(x=0,k=i+1;s[k]!='\0';k++)
    { b[x]=s[k];x++;}
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<len1;i++)
    for(j=0;j<len1-i-1;j++)
    if(a[j]>a[j+1])
    {  c=a[j];a[j]=a[j+1];a[j+1]=c;
    }
    for(i=0;i<len2;i++)
    for(j=0;j<len2-i-1;j++)
    if(b[j]>b[j+1])
    {  d=b[j];b[j]=b[j+1];b[j+1]=d;
    }
    
    if(len1!=len2)
    printf("NO");
    else { if(strcmp(a,b)==0)
    printf("YES");
    else printf("NO");
}
}