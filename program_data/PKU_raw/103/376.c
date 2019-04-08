struct jisuan
{
	char zimu;
	int count;
}ji[1000];
int zhuanhua(char a)
{
	if(a>='a'&&a<='z')
		return a-32;
	else
		return a;
}
int main()
{
	char str[1001];
	cin>>str;
	int i,l,flag;
	l=strlen(str);
	str[0]=zhuanhua(str[0]);
	ji[0].zimu=str[0];
	ji[0].count =1;
	flag=0;
	for(i=1;i<l;i++)
	{
		str[i]=zhuanhua(str[i]);
		if(str[i]==str[i-1])
			ji[flag].count++;
		else
		{
			flag++;
			ji[flag].zimu=str[i];
			ji[flag].count=1;
		}
	}
	for(i=0;i<=flag;i++)
		cout<<"("<<ji[i].zimu<<","<<ji[i].count <<")";
	return 0;
}





	
