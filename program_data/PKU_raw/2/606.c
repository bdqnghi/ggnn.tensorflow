int main()
{
    int num,temp;
    int author[27][500]={0,};
    char str[1000];
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        cin>>temp;
        getchar();
        cin>>str;
        for(int j=0;j<strlen(str);j++)
        {
            author[str[j]-'A'+1][0]++;
            author[str[j]-'A'+1][author[str[j]-'A'+1][0]]=temp;
        }
    }
    int temp_num=0,temp_author;
    for(int i=1;i<=26;i++)
    {
        if(author[i][0]>temp_num)
        {
            temp_num=author[i][0];
            temp_author=i;
        }
    }
    cout<<(char)(temp_author+'A'-1)<<endl;
    cout<<temp_num<<endl;
    for(int i=1;i<=temp_num;i++)
    {
        cout<<author[temp_author][i]<<endl;
    }
 
    return 0;
}