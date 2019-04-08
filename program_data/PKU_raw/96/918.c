char c[101]={'\0'},s[100]={'\0'};//c?????s???
int yu=0;int l;//?????
int main()
{
	void shang(int,int);
	cin>>c;
	for(l=0;c[l]!='\0';l++);
	shang(0,0);
	int i,j;
	if(s[1]=='\0')
		cout<<s[0];
	else if(s[0]=='0'&&s[1]=='0'&&s[2]=='\0')
		cout<<0;
	else
	{
	for(i=0;;i++)
		if(s[i]!='0') break;
	for(j=i;s[j]!='\0';j++)
		cout<<s[j];
	}
	cout<<endl;
	cout<<yu;
	return 0;
}
void shang(int sw,int k)//??????????????????,???????????
{
	if(k<l)
	{
	int chu;//????????????
	chu=yu*10+(c[k]-'0');
	k++;
	while(chu<13)
	{
		if(k==l)
			break;
		chu=chu*10+(c[k]-'0');
		k++;
		s[sw]='0';sw++;
	}
	s[sw]=chu/13+'0';
	sw++;
	yu=chu%13;
	shang(sw,k);
	}
}