char * mystrrchr(char * strcopy, char * end)
{
    char * tmp = end-1;
    while(tmp>=strcopy)
    {
        if(*tmp=='(')
        {
            return tmp;
        }
        tmp--;
    }
    return NULL;
}

void judge(char * str,char * flag)
{
    char strcopy[101];
    strcpy(strcopy,str);
    int len=strlen(strcopy);
    char * index1=strchr(strcopy,')');
    while(index1!=NULL&&(index1-strcopy)<len)
    {
        char * index2=mystrrchr(strcopy,index1);
        if(index2!=NULL)
        {
            strcopy[index1-strcopy]='-';
            strcopy[index2-strcopy]='-';
        }
        index1=strchr(index1+1,')');
    }
    int i=0;
    for(i=0;i<len;i++)
    {
        if(strcopy[i]=='(')
            flag[i]='$';
        if(strcopy[i]==')')
            flag[i]='?';
    }
    printf("%s\n%s\n",str,flag);
}

int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    char str[101];
    char flag[101];
    while(n>0)
    {
        memset(flag,' ',sizeof(flag));
        gets(str);
        flag[strlen(str)]='\0';
        judge(str,flag);
        n--;
    }
    return 0;
}
