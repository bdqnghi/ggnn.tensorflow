int main()
{
	int num1[20],num2[20];
	int m,n;
	int len1,len2;
	cin>>m>>n;
	int temp = m;
	for(len1 = 0;temp>=1;len1++){
		num1[len1] = temp;
		temp /=2;
	}
	temp = n;
	for(len2 = 0;temp>=1;len2++){
		num2[len2] = temp;
		temp/= 2;
	}
	int i=1;
	while(num1[len1-i]==num2[len2-i])
		i++;
	cout<<num1[len1-i+1]<<endl;
	return 0;
}

