int main()
{
    int a,b,i,j,l,s;
    int c[1000]; 
    char str1[1000],str2[1000];
    scanf("%d%s%d",&a,str1,&b);
    l=strlen(str1);
    s=0;
    for(i=0;i<l;i++)
    {
    if(str1[i]>='A'&&str1[i]<='Z')
    str1[i]=str1[i]-'A'+10;
    else if(str1[i]>='a'&&str1[i]<='z')
    str1[i]=str1[i]-'a'+10;
    else
    str1[i]=str1[i]-'0';
    s=str1[i]+(s*a);
    }
    if(s==0)
    printf("0");
    for(i=0;s!=0;i++)
    {
    c[i]=s%b;
    s=s/b;
    }
    for(j=0;j<i;j++)
    {
    if(c[j]<=9)
    str2[i-j-1]=c[j]+'0';
    else 
    str2[i-j-1]=c[j]+'A'-10;
    }
    printf("%s\n",str2);
    getchar();
    getchar();
}
