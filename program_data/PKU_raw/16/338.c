int main()  
{
	int a[5]={0},n,i,j;
	cin>>n;
    a[0]=n/10000;
	a[1]=(n-a[0]*10000)/1000;
	a[2]=(n-10000*a[0]-1000*a[1])/100;
	a[3]=(n-10000*a[0]-1000*a[1]-100*a[2])/10;
	a[4]=n-a[0]*10000-a[1]*1000-a[2]*100-a[3]*10;
	if(n==0)
		cout<<0;
	else
    for(i=0;i<5;i++)
	{
		if(a[i]!=0)
		{
			for(j=4;j>=i;j--)
				cout<<a[j];
			break;
		}
	}
	cout<<endl;
	return 0;
}