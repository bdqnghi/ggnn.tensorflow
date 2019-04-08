int main()
{
    char c[210],qinpeng[210];
    int i,j;
    gets(c);
    for(i=0;i<(strlen(c)-1);i++)
    {
                            qinpeng[i]=c[i]+c[i+1];
    }
    qinpeng[strlen(c)-1]=c[0]+c[strlen(c)-1];
    qinpeng[strlen(c)]='\0';
    printf("%s\n",qinpeng);
    return 0;
}