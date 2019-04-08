void get_next(char t[],int l,int next[])
{
    int j=0,k=-1;
    next[0]=-1;
    while(j<l)
    {
        if(k==-1||t[j]==t[k])
        {
            j++;k++;
            if(t[j]==t[k]) next[j]=next[k];
            else next[j]=k;
        }
        else k=next[k];
    }
}
int kmp_index(char s[],char t[],int ls,int lt,int next[])
{
    int i=0,j=0;
    while(i<ls)
    {
        if(j==-1||s[i]==t[j])
        {
            i++;
            j++;
        }
        else j=next[j];
        if(j==lt) return i-lt;
    }
    return -1;
}
int main()
{
    char s[51],t[51];
    int next[51]={-1},lt=0,ls,i;
    gets(t);
    while(t[lt]!=' ') lt++;
    ls=strlen(t)-1-lt;
    for(i=0;i<ls;i++) s[i]=t[lt+1+i];
    t[lt]='\0';
    s[ls]='\0';
    get_next(t,lt,next);
    printf("%d\n",kmp_index(s,t,ls,lt,next));
}