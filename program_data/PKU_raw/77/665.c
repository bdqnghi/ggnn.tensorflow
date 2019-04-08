int main()
{
    void paixu(char num[10000]);
    char num[10000];
    cin.getline(num,10000);
    paixu(num);
    return 0;
}
void paixu(char num[])
{
    char boy,girl;
    int i=0,j,k;
    boy=num[0];
    while(num[i]!='\0')
    {
        if(num[i]!=boy&&num[i]!=' ')
        {
            girl=num[i];
            break;
        }
        i++;
    }
    while(num[i]!='\0')
    {
        if(num[i]!=boy)
        {
            for(j=i-1;;j--)
            {
                if(num[j]!=' ')
                {
                    cout<<j<<" "<<i<<endl;
                    break;
                }
            }
            num[j]=' ';
            num[i]=' ';
            break;
        }
        i++;
    }
    if(num[0]!=' ')
    {
        paixu(num);
    }
}