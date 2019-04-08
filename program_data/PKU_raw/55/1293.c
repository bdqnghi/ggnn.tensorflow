
long pow(int a,int b)
{
	long c;
	if(b==0)
		c=1;
	if(b>0)
		c=pow(a,b-1)*a;
	return c;
}

int main()
{
	int a,b,i,j;
	char form[1000],late[1000];
	long ten=0;
	cin>>a;
	cin>>form;
	cin>>b;
	for(i=0;i<strlen(form);i++)
		if(form[i]>=97&&form[i]<=122)
			form[i]-=32;
	for(i=strlen(form)-1,j=0;i>=0;i--,j++)
	{
		if(form[i]>=48&&form[i]<=57)
		{
			form[i]-=48;
			ten+=form[i]*pow(a,j);
		}
		if(form[i]>=65&&form[i]<=90)
		{
			form[i]-=55;
			ten+=form[i]*pow(a,j);
		}
	}
	if(ten==0)
	{
		cout<<ten<<endl;
		return 0;
	}
	for(i=0;i<=1000;i++)
	{
		if(ten%b<10)
			late[i]=ten%b+48;
		if(ten%b>=10)
			late[i]=ten%b+55;
		if(ten/b==0&&ten%b==0)
			late[i]='\0';
		ten=ten/b;
	}
	for(i=strlen(late)-1;i>=0;i--)
	{
		if(i!=0)
			cout<<late[i];
		else cout<<late[i]<<endl;
	}
	return 0;
}
