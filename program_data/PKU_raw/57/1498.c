
int main()
{
    char word[50][50],t1,t2;
    int n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",word[i]);
    for(i=0;i<n;i++)
    {
        l=strlen(word[i]);
        if(word[i][l-1]=='r'&&word[i][l-2]=='e')
        {    
            word[i][l-1]='\0';
            word[i][l-2]='\0';
        }
        else if(word[i][l-1]=='y'&&word[i][l-2]=='l')
        {    
            word[i][l-1]='\0';
            word[i][l-2]='\0';
        }
        else if(word[i][l-1]=='g'&&word[i][l-2]=='n'&&word[i][l-3]=='i')
        {
            word[i][l-1]='\0';
            word[i][l-2]='\0';
            word[i][l-3]='\0';
        }
        printf("%s\n",word[i]);
    }
    return(0);
}
