
struct l
{
	char a[22];
	int x;
	int y;
	char m;
	char n;
	int h;
};



int main()
{
	int n,i;
	cin>>n;
	struct l s[101];
	int f=0,j,c=0;
	for(i=1;i<=n;i++)
	{
		int p=0;
		cin>>s[i].a;
		cin>>s[i].x;
		cin>>s[i].y;
		cin>>s[i].m;
		cin>>s[i].n;
		cin>>s[i].h;
	if(s[i].x>80&&s[i].h>=1)
		p+=8000;
	if(s[i].x>85&&s[i].y>80)
		p+=4000;
	if(s[i].x>90)
		p+=2000;
	if(s[i].x>85&&s[i].n=='Y')
		p+=1000;
	if(s[i].y>80&&s[i].m=='Y')
		p+=850;
	c+=p;
	if(p>f)
	{
		f=p;
		j=i;
	}
	}


	cout<<s[j].a<<endl;
	cout<<f<<endl;
	cout<<c<<endl;
	return 0;
}
