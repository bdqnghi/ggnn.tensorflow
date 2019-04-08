int main()
{
    char word[100][100]={'\0'},c='\0',alter[100]={'\0'},alter0[100]={'\0'};
    int i=0,j=0,sum;
    while(c!='\n')
    {
        c=getchar();
        while(c!=' '&&c!='\n')      //?????????????
        {
            word[i][j]=c;
            c=getchar();
            j++;
        }
        i++;
        j=0;
    }
    sum=i;
    cin.getline(alter0,100,'\n');           //??????
    cin.getline(alter,100,'\n');
    for(i=0;i<sum;i++)
    {
        j=0;
        while(alter0[j]==word[i][j]&&j<=99)     //???????
        {
            j++;
        }
        if(j==100)
        {
            for(j=0;j<100;j++)
            {
                word[i][j]=alter[j];
            }
        }
    }
    for(i=0;i<sum-1;i++)                      //??
    {
        cout<<word[i]<<' ';
    }
    cout<<word[sum-1];
    return 0;
}