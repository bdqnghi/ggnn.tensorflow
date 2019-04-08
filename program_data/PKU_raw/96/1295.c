int main()
{
	char a[100];
	cin>>a;
	int b[100],shang[100];
	int len=strlen(a);
	if(len==1){
		cout<<'0'<<endl;
		cout<<a<<endl;
		return 0;
	}
	int i=0;
	for(i=0;i<len;i++)
		b[len-1-i]=(int)a[i]-48;
	if(len==2&&b[1]*10+b[0]<13){
		cout<<'0'<<endl;
		cout<<b[1]*10+b[0]<<endl;
		return 0;
	}
	int left=b[len-1];
	int sum=0;
	for(i=len-2;i>=0;i--){
		sum=left*10+b[i];
		shang[i]=sum/13;
		left=sum%13;
	}
	int temp=len-2;
	if(shang[temp]==0)temp--;
	for(i=temp;i>=0;i--)
		cout<<shang[i];
	cout<<endl;
	cout<<left<<endl;
	return 0;
}