int main()
{
	int len=0,counts=0,k=0,i;
	char str[1001],c; 
	cin>>str;
	for(len=0;str[len]!='\0';len++);
	while(k<len)
	{
		c=str[k];
		if(c>='a')
			c=c-32;
		for(i=0;i<len;i++)
		{
			if(str[k+i]==c||str[k+i]==(c+32))
				counts++;
			else
				break;
		}
		cout<<'('<<c<<','<<counts<<')';
		k=k+i;counts=0;
	}
	cout<<endl;
	cin.get();cin.get();
	return 0;
}