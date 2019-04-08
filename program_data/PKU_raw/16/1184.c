int main()
{
	int A,B,a[5],i=0,j=0;
	cin>>A;
	do
	 {
			B=A/10;
	        a[i]=A-B*10;
			A=B;
			i++;
			j++;
	}
	 while(A!=0);
	for(i=0;i<j;i++)
		cout<<a[i];
	return 0;
}

