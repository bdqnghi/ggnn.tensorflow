void insert(char a[10],char b[4])
{
	int len;
	len=strlen(a);
	int i,temp=0;
	for(i=0;i<len;i++)
		if(a[temp]-a[i]<0)
			temp=i;
	for(i=0;i<=temp;i++)
		cout<<a[i];
	cout<<b[0]<<b[1]<<b[2];
	for(i=temp+1;i<len;i++)
		cout<<a[i];	
         cout<<endl;
}
int main()
{
	char str[10]={0},substr[4]={0};
	while(cin>>str>>substr)
    	insert(str,substr);
	return 0;
}
