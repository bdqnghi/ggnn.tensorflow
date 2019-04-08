int main()
{
	int i,e=0;
	char a[80],b[80];
	cin.getline(a,80);
	cin.getline(b,80);//??ab
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]>96)
			a[i]=a[i]-32;
		if(b[i]>96)
			b[i]=b[i]-32;//?????
		if((a[i]-32)*(b[i]-32)==0)
			continue;
		if(a[i]>b[i])
		{
			cout<<'>';
			e=1;
		}
		if(a[i]<b[i])
		{
			cout<<'<';
			e=1;
		}
		if(a[i]==b[i])
			continue;//????

	}
	if(e==0)
		cout<<'=';//?????????
	return 0;
}
