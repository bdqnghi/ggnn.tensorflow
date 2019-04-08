int main()
{
    int a[102][102],row,col,t,k,i,j;
    cin>>row>>col;
    t=row+col-2;
    for(i=0;i<row;i++)
    	for(j=0;j<col;j++)
    		cin>>a[i][j];
    for(k=0;k<=t;k++)
    {
        if(k+1<=col) i=0;
        else i=k-col+1;
    	j=k-i;
    	while(j>=0&&i<row)
    	{
    		cout<<a[i][j]<<endl;
    		i++;j--;
    	}
    }
	return 0;
}









