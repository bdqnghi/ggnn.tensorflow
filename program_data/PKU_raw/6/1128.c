int main()
{
    int group=0;
    int row=0,col=0;
    int a[101][101];
    int (*p)[101];
    int i,j,sum=0;
    p=a;
    cin>>group;
    while(group--)
    {
        cin>>row>>col;
        for(i=0;i<row;i++)//??
            for(j=0;j<col;j++)
                cin>>*(*(p+i)+j);
        sum=0;
        if(row==1&&col==1)  sum=**p;//????
        else
        {
            for(i=0;i<col;i++)//??????????
                {sum+=*(*p+i);  if(row>1)   sum+=*(*(p+row-1)+i);}
            for(i=1;i<=row-2;i++)//????????????
                {sum+=*(*(p+i));  if(col>1)   sum+=*(*(p+i)+col-1);}
        }
        cout<<sum<<endl;

    }
}
