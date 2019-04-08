int main(int argc,char *argv[])
{
    int i,b[26],len,s=0;
    char a[301];
    gets(a);
    len=strlen(a);
    for(i=0;i<26;i++)b[i]=0;
    for(i=0;i<len;i++)if(a[i]<='z'&&a[i]>='a')b[(a[i]-'a')]++;
    for(i=0;i<26;i++)s+=b[i];
    if(s==0)printf("No\n");
    else for(i=0;i<26;i++)if(b[i]!=0)printf("%c=%d\n",i+'a',b[i]);
    return 0;
}