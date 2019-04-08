int main()
{
	char s1[1000],s2[1000];
	int l,t=0,a[1000],b[1000];
	cin.getline(s1,1000);

	cin.getline(s2,1000);
	l=strlen(s1);
	for(int i=0;i<l;i++)	
	{
			a[i]=s1[i];
		if(a[i]>64&&a[i]<91)
		{a[i]=a[i]+32;}
		
	    b[i]=s2[i];
		if(b[i]>64&&b[i]<91)
		{b[i]=b[i]+32;}
		i++;
	}
	for(int j=0;j<l;j++)
	{
		if(a[j]>b[j])
		{
			cout<<">"<<endl;
			t++;
			break;
		}
		else if(a[j]<b[j])
		{
			cout<<"<"<<endl;
			t++;
			break;
		}
	}
	if(t==0)
		cout<<"="<<endl;
    return 0;
}