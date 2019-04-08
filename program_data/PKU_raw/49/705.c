
int judge(char ch[500])
{
	int len=strlen(ch);
	for(int i=0;i<=len/2;i++)
	{
		if(ch[i]!=ch[len-1-i])
			return 0;
	}
	return 1;
}
int main()
{
	char a[500]={'\0'},b[500]={'\0'};
	cin>>a;
	int j,k,len,i;

	len=strlen(a);
	//cout<<len<<endl;
	for(i=2;i<=len;i++){
		j=0;
		while(j<=len-i)
		{
			for(k=0;k<i;k++)
			{
				b[k]=a[j+k];
			}
			
			if(judge(b))
				cout<<b<<endl;
			j++;
		}
	}
	return 0;
}
