int main(){
	int n,i,m=0,b[100],sum=0,sum1=0;
	cin>>n;
	char a[100][2];
	for(i=0;i<=n-1;i++)
	{
		a[i][1]=((i+1)%10)+'0';
		a[i][0]=(i+1-(i+1)%10)/10+'0';
		if((i+1)%7==0)
		{
			b[m]=i+1;
			m++;
		}
		else if((a[i][0]=='7')||(a[i][1]=='7'))
		{
		    b[m]=i+1;
		    m++;
		}
	}
	for(i=0;i<=n-1;i++)
		sum=sum+(i+1)*(i+1);
	for(i=0;i<=m-1;i++)
		sum1=sum1+b[i]*b[i];
	cout<<sum-sum1;
	return 0;
}