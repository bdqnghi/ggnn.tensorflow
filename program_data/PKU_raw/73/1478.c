
int a[5][5];
int main()
{
    int min,max,k = 0,p,q,i,j;
    for (i = 0;i<5;i++)
    {
    	for (j = 0;j<5;j++)
    		cin>>a[i][j];
    }
    for (i = 0;i<5;i++)
    {
    	for (j = 0;j<5;j++)
    	{
    		max = a[i][j];
    		min = a[i][j];
    		for (p = 0;p<5;p++)
    		{
    			if (max<a[i][p])
    				max = a[i][p];
    		}
    		for (q = 0;q<5;q++)
    		{
    			if (min>a[q][j])
    				min = a[q][j];
    		}
    		if (a[i][j] == min&&a[i][j] == max)
    		{
    			cout<<i+1<<' '<<j+1<<' '<<a[i][j];
    			k++;
    		}
    	}
    }
    if (k == 0)
    	cout<<"not found"<<endl;
	return 0;
}
