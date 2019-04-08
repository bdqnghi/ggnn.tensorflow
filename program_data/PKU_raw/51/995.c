
int main()
{
    char word[510],subword[510][6];
    int n,i,j,len,num[510]= {0},temp=0;
    cin>>n;
    cin.get();
    cin.getline(word,510);
    len=strlen(word);
    for(i=0; i<=len-n; i++)
    {
        for(j=0; j<n; j++)
        {
            subword[i][j]=word[i+j];
        }
        subword[i][n]='\0';
    }
    for(i=0; i<len-n; i++)
        for(j=i+1; j<=len-n; j++)
        {
            if(strcmp(subword[i],subword[j])==0 && num[i]>=0)
            {
                num[i]++;
                num[j]=-1;
            }

        }

    for(i=0; i<len-n; i++)
    {
        if(num[i]>temp)
            temp=num[i];
    }
    if(temp==0) cout<<"NO"<<endl;
    else
    {
        cout<<temp+1<<endl;
        for(i=0; i<len-n; i++)
        {
            if(num[i]==temp)
                cout<<subword[i]<<endl;
        }
    }
    return 0;
}
