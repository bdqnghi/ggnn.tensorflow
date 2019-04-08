int main()
{
    char str[1000];
    int ji[1000];
    int i,j,n;
    cin>>str;
    for(i=0;i<1000;i++)
    {ji[i]=1;}
    n=strlen(str);
    for(i=0;i<n;i++)
    {
    if(str[i]>='a')
    {str[i]=str[i]-'a'+'A';}
    }
    for(i=0;i<n;i++)
    {
                    if(str[i]==str[i+1])
                    {
                                        for(j=i+1;j<n;j++)
                                        {str[j]=str[j+1];}
                                        n--;
                                        ji[i]++;
                                        i--;
                    }
    }
    for(i=0;i<n;i++)
    {cout<<"("<<str[i]<<","<<ji[i]<<")";}
    return 0;
}