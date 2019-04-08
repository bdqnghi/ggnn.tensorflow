
void add()
{
	char a[255],b[255];
	int ua[255]={0},ub[255]={0},sum[255]={0};
	cin>>a>>b;
	int lena,lenb;
	lena=strlen(a),lenb=strlen(b);
	for (int i=0;i<lena;i++)
	{ua[i]=a[lena-1-i]-48;}//cout<<ua[i];}
//	cout<<endl;
	for (int i=0;i<lenb;i++)
	{ub[i]=b[lenb-1-i]-48;}//cout<<ub[i];}
//	cout<<endl;
	int max;
	if (lena>lenb) max=lena;
	else max=lenb;
	int temp;
	for (int i=0;i<max+1;i++)
	{
		temp=ua[i]+ub[i];
		ua[i+1]+=temp/10;
		sum[i]=temp%10;
//		cout<<temp<<endl;
	}
	int mark=0;
	for (int i=254;i>=0;i--)
	{
		if (sum[i]!=0)
		mark=1;
		if (mark==1)
		cout<<sum[i];
	}
	if (mark==0) cout<<"0";
	cout<<endl;
}

int main()
{
//	int n;
//	cin>>n;
//	for (int i=0;i<n;i++)
	add();
}