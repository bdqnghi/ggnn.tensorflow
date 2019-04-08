int panduan(char str3[],char str4[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(str3[i]!=str4[i])
			return 0;
	}
	return 1;
}//????????????????????1????0
int main()
{
	int N,l,i,j,max=0;
	char str[500];
	char str2[500][500];
	int a[500];
	for(i=0;i<500;i++)
		a[i]=1;
	cin>>N;
	cin>>str;
	l=strlen(str);
	for(i=0;i<=l-N;i++)
	{
		for(j=0;j<N;j++)
		{
			str2[i][j]=str[i+j];
		}
		str2[i][N]='\0';
		
	}//?????N?????
	for(i=l-N-1;i>=0;i--)
		for(j=l-N;j>i;j--)
			a[i]=a[i]+panduan(str2[i],str2[j],N);//???????
	for(i=0;i<=l-N;i++)
	{
		if(a[i]>=max)
			max=a[i];
	}//?????
	if(max==1)
		cout<<"NO";//????????1????????????
	else
	{
		cout<<max<<endl;
	    for(i=0;i<=l-N;i++)
		{
			if(a[i]==max)
				cout<<str2[i]<<endl;
		}
	}//?????????????
	return 0;



}


