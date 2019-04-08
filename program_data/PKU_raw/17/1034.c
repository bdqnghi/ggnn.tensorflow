int main()
{
    char str[1001];int n;
    while(~scanf("%s",str))
    {
        n=strlen(str);
        printf("%s",str);
        printf("\n");
        for(int i=1;i<n;i++)
        {
            if(str[i]==')')  
            {
                for(int j=i-1;j>=0;j--) 
                {if(str[j]=='(') {str[i]=' ';str[j]=' ';break;}}
            }
        }
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(') str[i]='$';
            else if(str[i]==')') str[i]='?';
            else str[i]=' ';
        }
        printf("%s",str);
        printf("\n");
    }
}