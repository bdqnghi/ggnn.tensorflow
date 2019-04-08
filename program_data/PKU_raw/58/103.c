int main()//?????c?????? 
{
    int n,i,j,check=1;//n????check???????? 
    char test[100][90];//????? 
    cin>>n;getchar(); //??n???????? 
    for(i=0;i<n;i++)gets(test[i]);//???????  
    for(i=0;i<n;i++)
    {
                     
                    check=1;//??? 
                    if(!((test[i][0]=='_')||(test[i][0]>='a'&&test[i][0]<='z')||(test[i][0]>='A'&&test[i][0]<='Z')))check=0;//??????????? 
                    j=1;
                    while(test[i][j]!=0)
                    {
                                         if(!((test[i][j]=='_')||(test[i][j]>='a'&&test[i][j]<='z')||(test[i][j]>='A'&&test[i][j]<='Z')||(test[i][j]>='0'&&test[i][j]<='9')))check=0;//?????????????? 
                                         j++; 
                    }
                    cout<<check<<endl;//????? 
    }
    getchar();
    getchar();
    return 0;
} 

