char str[1000];
int num[1000]={0};
char w[1000]={'\0'};
int ch='a'-'A';
int main()
{
	cin>>str;
	int len;
	int j=0;
	if(str[0]>'Z')
		w[0]=str[0]-ch;
	else
		w[0]=str[0];
	num[0]++;
	
	len=strlen(str);
	for(int i=1;i<len;i++)
	{
		if(str[i]==w[j]||str[i]-ch==w[j])
		{
			num[j]++;
			continue;
		}
		else
		{
			j++;
			num[j]++;
			if(str[i]>'Z')
				w[j]=str[i]-ch;
			else
				w[j]=str[i];
		}
	}
	for(int i=0;i<1000;i++)
	{
		if(num[i])
			cout<<"("<<w[i]<<","<<num[i]<<")";
	}
	return 0;
}