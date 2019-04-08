int main()
{
	int a,b,i=0,k=0,len;
	char n[100],m[100];
	cin>>a>>m>>b;
	len=strlen(m);
	for(i=0;m[i]!='\0';i++)
	{
		k*=a;
		if(m[i]>='a'&&m[i]<='z')
			k+=m[i]-'a'+10;
		else if(m[i]>='A'&&m[i]<='Z')
			k+=m[i]-'A'+10;
		else if(m[i]>='0'&&m[i]<='9')
			k+=m[i]-'0';
	}
	i=0;
	n[0]='0';
	n[1]='\0';
	while(k!=0)
	{
		if(k%b<=9)
		{
			n[i++]='0'+k%b;
			k=k/b;
		}
		else
		{
			n[i++]='A'+k%b-10;
			k=k/b;
		}
	}
	if(i!=0)
		n[i]='\0';
	len=strlen(n);
	for(i=len-1;i>=0;i--)
	{
		cout<<n[i];
	}
	cout<<endl;
	return 0;
}