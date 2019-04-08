int main()
{
    int hang,lie,a[100][100]={0};
    cin>>hang>>lie;
    int i,j,k;
    for(i=0;i<hang;i++)
    {
        for(j=0;j<lie;j++)
            cin>>*(*(a+i)+j);
    }
    for(k=0;k<(hang+lie-1);k++)
    {
        if(k<lie)
        {
            for(i=0;i<hang&&(k-i)>-1;i++)
            cout<<*(*(a+i)+k-i)<<endl;
        }
        else
        {
            for(i=(k-lie+1);i<hang&&(k-i)>-1;i++)
            cout<<*(*(a+i)+k-i)<<endl;
        }
    }
    return 0;
}

    
