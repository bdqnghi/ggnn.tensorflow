int N;
void chenger(int depth,char *a)
{
	if(depth==N) //??N???
	{
		int len=strlen(a)-1;
		for(int i=len;i>=0;i--)
			cout<<a[i];
	}
	else
	{
		char b[100]={'\0'};
		int len=strlen(a);
		int temp[100]={0};//??
		for(int i=0;i<len;i++)//??
		{
			b[i]=((a[i]-'0')*2)%10+temp[i]+'0';
			temp[i+1]=((a[i]-'0')*2)/10;
		}
		if(temp[len]!=0) b[len]=temp[len]+'0';
		chenger(depth+1,b);
	}
}
int main()
{
	cin>>N;
	char num[100]={'\0'};
	num[0]='1';//2?0??
	chenger(0,num);
	return 0;
}