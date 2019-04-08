int main()
{
    int juzhen[5][5],pan=0,i,j,max[5],min[5];//juzhen??????,i,j???????????max?????min???? 
    for(i=0;i<5;i++)
    {
                    max[i]=-100000;
                    for(j=0;j<5;j++)
                    {
                                    cin>>juzhen[i][j];
                                    if (juzhen[i][j]>max[i]) max[i]=juzhen[i][j];//????? 
                    }
    }
    for(j=0;j<5;j++)
    {
                    min[j]=100000;
                    for(i=0;i<5;i++)
                    {
                                    if (juzhen[i][j]<min[j]) min[j]=juzhen[i][j];//????? 
                    }
    }
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    if ((juzhen[i][j]==max[i])&&(juzhen[i][j]==min[j])) //?????????????? 
                                    {
                                                                                       cout<<i+1<<" "<<j+1<<" "<<juzhen[i][j];
                                                                                       pan++;//???????pan??? 
                                    }
                    }
    }
    if (pan==0) cout<<"not found";//?????? 
    return 0;
}
