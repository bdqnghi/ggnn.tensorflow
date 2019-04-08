int p(int a)
{
    int sum=1;
    for(int i=0;i<a;i++)
    {
            sum=sum*10;
    }
    return sum;
}
int main()
{
    char str[31];
    cin.getline(str,31);
    int len=strlen(str),num[30],j=0,k=0;
    memset(num,0,sizeof(num));
    for(int i=len-1;i>=0;i--)
    {
            if((str[i]<='9')&&(str[i]>='0'))
            {
                   num[k]=num[k]+(str[i]-'0')*p(j);
                   j++;    
            }
            else if((str[i+1]<='9')&&(str[i+1]>='0'))
                 {
                                                     j=0;
                                                     k++;
                 }
                 else continue;
    }
    if((str[0]>'9')||(str[0]<'0'))  k--;
    for(int i=k;i>=0;i--)  cout<<num[i]<<endl;
    return 0;
}
