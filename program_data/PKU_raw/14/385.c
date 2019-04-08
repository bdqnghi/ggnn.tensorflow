int main(){
	int n,i,j,temp;
	cin>>n;
	struct stu{
		int xuehao[100000];
		int yuwen[100000];
		int shuxue[100000];
		int zongfen[100000];
	}a;
	for(i=0;i<n;i++)
	{
		cin>>a.xuehao[i];
		cin>>a.yuwen[i];
		cin>>a.shuxue[i];
		a.zongfen[i]=a.shuxue[i]+a.yuwen[i];
	}
	for(i=n-1;i>=n-3;i--)
		for(j=i;j>=1;j--)
			if(a.zongfen[j]>a.zongfen[j-1])
			{
				temp=a.zongfen[j-1];
				a.zongfen[j-1]=a.zongfen[j];
				a.zongfen[j]=temp;
				temp=a.xuehao[j-1];
				a.xuehao[j-1]=a.xuehao[j];
				a.xuehao[j]=temp;
			}
	for(i=0;i<=2;i++)
		cout<<a.xuehao[i]<<" "<<a.zongfen[i]<<endl;
	return 0;
}
