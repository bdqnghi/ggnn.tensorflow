int main()
{
	int sum,number[6]={0},i,j=0;
	cin>>sum;
	for (;sum>=100;number[j]++)		sum=sum-100;
	j++;
	for (;sum>=50;number[j]++) sum=sum-50;
	j++;
	for (;sum>=20;number[j]++)sum=sum-20;
	j++;
	for (;sum>=10;number[j]++)sum=sum-10;
	j++;
	for (;sum>=5;number[j]++)sum=sum-5;
	j++;
	for (;sum>=1;number[j]++)sum=sum-1;
	for(j=0;j<6;j++) cout<<number[j]<<endl;
	return 0;
}
