
int main()
{
	char str1[252],str2[252];
	cin.getline(str1,252);
	cin.getline(str2,252);
	unsigned int a[251]={0},b[251]={0};
    int len1=strlen(str1);int len2=strlen(str2);
	int i,j=0;
	//????????0
	for (i=len1-1;i>=0;i--)
		a[j++]=str1[i]-'0';
	j=0;
	for(i=len2-1;i>=0;i--)
		b[j++]=str2[i]-'0';
	if(strcmp(str1,"0")!=0&&strcmp(str2,"0")!=0)
	{
	for (i=0;i<=250;i++)
	{
		a[i]=a[i]+b[i];
        if(a[i]>=10)
		{
			a[i]=a[i]-10;
			a[i+1]++;
		}
	}
	for(i=250;i>=0;i--)
	{
		if (a[i]!=0)//????0?????
			break;
	}
	for(;i>=0;i--)
		cout<<a[i];//?????????????
	cout<<endl;
	}
	else cout<<0;
	return 0;
}