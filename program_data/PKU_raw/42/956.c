
int a[100000] ,i ,n ,num ,m ,l ,k;

int main()
{   int count;
    count=0;
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cin >> num;
	for(l=0; l<n; l++)
	{
		if(a[l]==num) 
		{
			for(m=l; m<n; m++)
				a[m]=a[m+1];
			l=l-1;
			count++;
		}
	}
	for(k=0;k<n-count;k++)
	{
		if(k==n-count-1) {cout << a[k] ; break;}
		cout << a[k] << " " ;
	}
	return 0;

}