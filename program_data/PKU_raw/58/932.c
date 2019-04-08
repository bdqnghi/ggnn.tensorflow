int main()
{
    int n=0,i=0,len=0;
    scanf("%d\n", &n);
    char str[100];
    //fgets(str, 100, stdin);
    while(i<n)
    {
        i++;
        fgets(str, 100, stdin);
        //printf("%s", str);
        len = strlen(str) - 1;
        if(str[0]=='_'||isalpha(str[0]))
            for(int j=0;j<len;j++)
            {
                if(!(str[j]=='_'||isalpha(str[j])||isdigit(str[j])))
                {
                    cout<<"0"<< endl;
                    break;
                }
                else
                    if(j==len-1) cout<<"1"<<endl;
            }
        else  cout<<"0"<<endl;
    }
    return 0;
}
