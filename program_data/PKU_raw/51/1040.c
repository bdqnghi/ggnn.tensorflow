int main()
{
    int m=0;
    cin>>m;
    cin.get();
    char word[500];
    cin.getline(word,500);
    int l=0;
    l=strlen(word);
    char chuan[500][500];
    int i=0;
    int j=0;
    //int p=0;
    for (i=0;i<l-m+1;i++)
    {
        for (j=0;j<m;j++)
        {
            chuan[i][j]=word[i+j];
        }
        chuan[i][j]='\0';
        //p++;
    }
    /*for (int k=0;k<l-m+1;k++)
    {
        cout<<chuan[k]<<endl;
    }
cout<<p<<endl;
    */int num[500]={0};
    for (int x=0;x<l-m+1;x++)
    {
        for (int y=x;y<l-m+1;y++)
        {
            int sum=0;
                for (int p=0;p<m;p++)
                {
                    if (chuan[y][p]!=chuan[x][p])
                    {
                        sum++;
                        break;
                    }
                    //num[x]++;
                }
                if (sum==0)
                {
                    num[x]++;
                }
        }
    }

        /*for (int k=0;k<l-m+1;k++)
        {
            cout<<num[k]<<endl;
        }

        */int temp=num[0];
        int tempx=0;
        for (int i=1;i<l;i++)
        {
            if (num[i]>temp)
            {
                temp=num[i];
                tempx=i;
            }
        }
        if (temp==1) cout<<"NO"<<endl;
        else
        {
        cout<<num[tempx]<<endl;
        for (int i=0;i<l;i++)
        {
            if (num[i]==num[tempx])
            {
                cout<<chuan[i]<<endl;
            }
        }
        }
    return 0;
}
