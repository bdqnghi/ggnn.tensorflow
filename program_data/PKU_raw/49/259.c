int p=1;
int f(char str[500],int lens);
int main()
{
	char str[500],lens;
	cin.getline(str,500);
	lens=strlen(str);
	f(str,lens);
	return 0;
}
int f(char str[500],int lens)
{
	int i,j,flag=0,k=p;
	for(i=0;i<lens;i++)
	{
		while(str[i-k+1]==str[i+k]&&(i-k+1)>=0&&i+k<lens&&k>0)
		k--;
		if(k==0)
		{
			flag=1;
			for(j=i-p+1;j<=i+p;j++)
				cout<<str[j];
			cout<<endl;
		}
		k=p;
	}
	p++;
	if(flag==1)
		f(str,lens);
	else
		return 0;
}