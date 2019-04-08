int main()
{
	int n,len1,len2;
	char a[100],b[100],t;
	cin>>n;
	for(int i=0;i<n;i++){
		memset(a,'0',100);
		memset(b,'0',100);
		cin>>a>>b;
		len1=strlen(a);
		len2=strlen(b);
		for(int j=0;j<len1-j;j++){
			t=a[j];
			a[j]=a[len1-j-1];
			a[len1-j-1]=t;
		}
		for(int j=0;j<len2-j;j++){
			t=b[j];
			b[j]=b[len2-j-1];
			b[len2-j-1]=t;
		}
		for(int j=0;j<len2;j++)
			if(a[j]>=b[j]) a[j]=a[j]-b[j]+'0';
			else {
				a[j+1]--;
				a[j]=a[j]+10-b[j]+'0';
			}
		if(a[len1-1]!='0') cout<<a[len1-1];
		for(int j=len1-2;j>=0;j--)
			cout<<a[j];
		cout<<endl;
	}
}
