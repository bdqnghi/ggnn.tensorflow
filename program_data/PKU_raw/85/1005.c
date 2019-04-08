int main()
{
    int n=0,i=0,len=0;
    scanf("%d\n", &n);
    char str[100];
    while(i<n)
    {
        i++;
        fgets(str, 100, stdin);
        len = strlen(str) - 1;
        if(str[0]=='_'||isalpha(str[0]))
            for(int j=0;j<len;j++)
            {
                if(!(str[j]=='_'||isalpha(str[j])||isdigit(str[j])))
                {
                    cout<<"no"<< endl;
                    break;
                }
                else
                    if(j==len-1) cout<<"yes"<<endl;
            }
        else  cout<<"no"<<endl;
    }
    return 0;
}
