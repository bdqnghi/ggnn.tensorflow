//********************************
//*???????  **
//*?????? 1300012946 **
//*???2013.11.1  **
//********************************
int main()
{
	int a[5][5],i,j,p,q=0,count=0;
	for (i=0 ; i<5 ; i++)
		for (j=0 ; j<5 ; j++)
		{
			cin>>a[i][j];
		}
    for (i=0 ; i<5 ; i++)
	    for (j=0 ; j<5 ; j++)
		{
			for (p=0 ; p<5 ; p++)
			{
				if (a[i][j]>a[i][p])
					count++;
			}
			for (p=0 ; p<5 ; p++)
			{
				if (a[i][j]<a[p][j])
					count++;
			}
			if (count==8)
			{
				cout<<i+1<<" "<<j+1<<" "<<a[i][j];
				q++;
			}
			count=0;
		}
		if (q==0)
			cout<<"not found";
		return 0;
}
