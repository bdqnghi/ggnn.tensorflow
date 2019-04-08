int main()
{
	int str[31]={0};
	int n,m=0,i,k =0,l;
	cin >>n;
	str[30] = 1;
	for(i =0;i<n;i++)
		for(int j =30;j>=0;j--)
		{
			l=2*str[j]+m;
			str[j]= l%10;
			m=l/10;
		}
	while(str[k]==0)
		k++;
	for(i =k;i<31;i++)
		cout<<str[i];
	cout<<endl;
	return 0;
}