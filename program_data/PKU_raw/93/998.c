int main(){
    int n,a[3]={0,0,0},yinshu,sum=0;
    char b[3]={'3','5','7'};
    cin>>n;    //?????? 
    if (n%3==0) a[0]=1;   //??n????3 
    if (n%5==0) a[1]=1;   //??n????5 
    if (n%7==0) a[2]=1;   //??n????7 
    yinshu=a[0]+a[1]+a[2];
    if (yinshu==0) cout<<'n';    //?????n 
    else
    {
        for (int i=0;i<3;i++)
        {
            if((a[i]!=0)&&(sum==yinshu-1))
            {
                                   cout<<b[i];
                                   break;
            }                  //??????????? ????? 
            if((a[i]!=0)&&(sum<yinshu-1))
            {
                                   sum++;
                                   cout<<b[i]<<' ';
            }                 //??????????????
        }
    } 
    return 0;
}      