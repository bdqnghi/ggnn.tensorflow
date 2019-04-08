//********************************
//*??????   **
//*?????? 1300012713 **
//*???2014.1.3  **
//********************************
int main()
{
	int i,j,n,a0 = 0,b0 = 0;
	double a[40],b[40];
	char str[10];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> str;
		if(strcmp(str,"male")==0)
		{
			a0++;
			cin >> a[a0];
		}
		else
		{
			b0++;
			cin >> b[b0];
		}
	}
	for(j = 1; j <= a0;j++)
	{
		for(i = 1; i <= a0-j;i++)
		{
			if(a[i] > a[i+1])
			{
				double a1 = a[i];
			    a[i] = a[i+1];
			    a[i+1] = a1;
			}
		}
	}	
	for(j = 1; j <= b0;j++)
	{
		for(i = 1;i<=b0-1;i++)
		{
		    if(b[i]<b[i+1])
			{
			    double b1 = b[i];
			    b[i] = b[i+1];
			    b[i+1] = b1;
			}
		}
	}
	for(i =1;i<=a0;i++)
		printf("%.2f ",a[i]);
	for(i=1;i<=b0-1;i++)
		printf("%.2f ",b[i]);
	printf("%.2f",b[b0]);
	return 0;
}
