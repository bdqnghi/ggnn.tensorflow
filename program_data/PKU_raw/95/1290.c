int min(int a,int b);
int main()
{
	int i,t=0,na,nb;
	char a[80],b[80];
	cin.getline(a,80,'\n');
	cin.getline(b,80,'\n');
	for(i=0;i<80;i++)
	{
		if(a[i]=='\n')
			na=i;
		else
			if(a[i]<91)
				a[i]+=32;
	}
	for(i=0;i<80;i++)
	{
		if(b[i]=='\n')
			nb=i;
		else
			if(b[i]<91)
				b[i]+=32;
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<b[i])
		{
			cout<<"<"<<endl;
			t=1;
			break;
		}
		if(a[i]>b[i])
		{
			cout<<">"<<endl;
			t=1;
			break;
		}
	}
	if(t==0)
		cout<<"="<<endl;
	return 0;
}

int min(int a,int b)
{
	if(a<=b)
		return a;
	else
		return b;
}