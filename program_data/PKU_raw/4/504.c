int main()
{
   int i,j,k,row,col,array[100][100];//????
   cin>>row>>col;//????
   for(i=0;i<row;i++)//????
    for(j=0;j<col;j++)
    {
        cin>>array[i][j];
    }
     for (k=0;k<=col+row-2;k++)//????
        for (i=0;i<=k;i++)
        {
            j=k-i;
            if(i<row&&j>=0&&j<col) cout<<array[i][j]<<endl;//??????
        }
    return 0;
}