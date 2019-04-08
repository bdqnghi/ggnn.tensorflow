

int main()
{
	int i,j,a,b,l;
	long s=0,ss[1001]={0};
	char s1[1001],s2[1001];
	cin>>a>>s1>>b;
	l=strlen(s1);
	for(i=0;i<1000;i=i+1)
		s2[i]=',';
	for(i=0;i<l;i=i+1)
	{
		if(s1[i]>='0'&&s1[i]<='9')
			ss[i+1]=ss[i]*a+s1[i]-'0';
		else if(s1[i]>='A'&&s1[i]<='Z')
			ss[i+1]=ss[i]*a+s1[i]-'A'+10;
		else
			ss[i+1]=ss[i]*a+s1[i]-'a'+10;
	}
	s=ss[l];
	for(i=0;i<1000;i=i+1)
	{
		j=s%b;
		if(j<=9)
			s2[i]='0'+j;
		else
			s2[i]='A'+j-10;
		s=s/b;
		if(s==0)
			break;
	}
	for(i=0;i<1000;i=i+1)
		if(s2[i]==',')break;
	for(i=i-1;i>=0;i=i-1)
		cout<<s2[i];
	cout<<endl;
	return 0;
}

