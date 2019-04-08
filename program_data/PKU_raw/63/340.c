int main()
{
    int a1,b1,a2,b2;//??????????? 
    int num1[100][100];//?????? 
    int num2[100][100];
    int num3[100][100];
    for(int i=0;i<100;i++)//????0 
    {
            for(int j=0;j<100;j++)
            {
                    num1[i][j]=0;
                    num2[i][j]=0;
                    num3[i][j]=0;
            }
    }
    cin>>a1>>b1;//?????? 
    for(int i=0;i<a1;i++)
    {
            for(int j=0;j<b1;j++)
            {
                    cin>>num1[i][j];
            }
    }
    cin>>a2>>b2;
    for(int i=0;i<a2;i++)
    {
            for(int j=0;j<b2;j++)
            {
                    cin>>num2[i][j];
            }
    }
    for(int i=0;i<a1;i++)//?????????? 
    {
            for(int j=0;j<b2;j++)
            {
                    for(int k=0;k<b1;k++)
                    {
                            num3[i][j]=num3[i][j]+num1[i][k]*num2[k][j];
                    }
            }
    }
    for(int i=0;i<a1;i++)
    {
            for(int j=0;j<b2;j++)
            {
                    cout<<num3[i][j];
                    if(j<b2-1)
                    {
                              cout<<' ';
                    }
            }
            cout<<endl;
    }
    return 0;
}

