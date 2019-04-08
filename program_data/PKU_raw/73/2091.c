//**************************************
//?????????
//??????
//?????2011.10.29 19:58
//**************************************
int main()
{
    int number[5][5];//?????
    int i,j;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {cin>>number[i][j];}
    }
    int maxnumber,l;
    int max1[5][5]={0},max2[5][5]={0};//max1?max2??????????
    for(i=0;i<5;i++)//???????????
    {
                    maxnumber=number[i][0];
                    max1[i][0]=1;
                    l=0;
                    for(j=1;j<5;j++)
                    {
                                    if(maxnumber<number[i][j])
                                    {maxnumber=number[i][j];
                                    max1[i][j]=1;
                                    max1[i][l]=0;
                                    l=j;
                                    }
                    }
    }
    for(i=0;i<5;i++)//??????????
    {
                    maxnumber=number[0][i];
                    max2[0][i]=1;
                    l=0;
                    for(j=1;j<5;j++)
                    {
                                    if(maxnumber>number[j][i])
                                    {maxnumber=number[j][i];
                                    max2[j][i]=1;
                                    max2[l][i]=0;
                                    l=j;
                                    }
                    }
    }
    int judge=0;//judge??????????
    for(i=0;i<5;i++)//????????
    {
                    for(j=0;j<5;j++)
                    {
                                    if(max1[i][j]&&max2[i][j])
                                    {cout<<i+1<<" "<<j+1<<" "<<number[i][j];
                                    judge=1;
                                    }
                    }
    }
    if(judge==0){cout<<"not found";}
    return 0;
}