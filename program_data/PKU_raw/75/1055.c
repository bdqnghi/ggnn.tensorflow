int main()
{
    int RS[1001]={0};
    int n=0,i=0;
    int X[1010],Y[1010];
    while(1)
    {
        cin>>X[i];
        i++;
        if(cin.get()!=',')
        {
            n=i;
            break;
        }
    }
    char comma;
    for(int i=0; i<n-1; i++)
        cin>>Y[i]>>comma;
    cin>>Y[n-1];
    for(i=0; i<n; i++)
        for(int j=X[i]; j<Y[i]; j++)
            RS[j]++;
    for(int j=1; j<1001; j++)
    if(RS[j]>=RS[0])
            RS[0]=RS[j];
    cout<<n<<" "<<RS[0]<<endl;
    return 0;
}
