/*????????
 ?????
 ??????
 ???????????????*/


int main()
{
    int hang,lie;
    cin>>hang>>lie;//?????
    int a[100][100];
    int i,j;
    for(i=1;i<=hang;i++)
    {
        for(j=1;j<=lie;j++) cin>>a[i][j]; //????
    }
    int sum=0,quan=1;

    while(sum<hang*lie)
    {
        for(i=quan;i<=lie-quan+1;i++) {cout<<a[quan][i]<<endl; sum++;} if(sum==hang*lie) break; //????????????????????????
        for(i=quan+1;i<=hang-quan+1;i++){cout<<a[i][lie-quan+1]<<endl; sum++;} if(sum==hang*lie) break;
        for(i=lie-quan;i>=quan;i--) {cout<<a[hang-quan+1][i]<<endl; sum++;} if(sum==hang*lie) break;
        for(i=hang-quan;i>=quan+1;i--){cout<<a[i][quan]<<endl; sum++;} if(sum==hang*lie) break;
        quan++;
    }

    return 0;
}