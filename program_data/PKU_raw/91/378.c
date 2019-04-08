
int main()
{
        char s[110],s1[110];
        int l,i;
memset(s,0,sizeof(s));
memset(s1,0,sizeof(s1));
        gets(s);
        l=strlen(s);
        for(i=0;i<l-1;i++)
        {
                s1[i]=s[i]+s[i+1];
        }
        s1[l-1]=s[0]+s[l-1];
        printf("%s\n",s1);
}
