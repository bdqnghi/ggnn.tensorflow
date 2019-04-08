

void main()
{
    int i,j,k,flu,max_len=0,min_len=100,max_num,min_num;
    char ch[20000],str[200][100];
    gets(ch);
    for(i=j=k=flu=0;i<strlen(ch);i++)
        if(ch[i]!=' '&&ch[i]!=',') 
        {
            flu=1;
            str[k][j++]=ch[i];
        }
        else if(flu==1)
        {
            str[k++][j]='\0';
            j=flu=0;
        }
    if(flu==1)
        str[k++][j]='\0';
    for(i=0;i<k;i++)
    {
        if(max_len<strlen(str[i]))
        {
            max_len=strlen(str[i]);
            max_num=i;
        }
        if(min_len>strlen(str[i]))
        {
            min_len=strlen(str[i]);
            min_num=i;
        }
    }
    printf("%s\n",str[max_num]);
    printf("%s\n",str[min_num]);
}