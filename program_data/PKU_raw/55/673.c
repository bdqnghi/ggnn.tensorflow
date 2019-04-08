int main ()
{
	char string1[1000],string2[1000];
	int b,c=0,i,j=0,temp;
	float a,d;
	cin>>a>>string1>>d;
	b=strlen(string1);
	for(i=0;i<b;i++)
	{
		if(string1[i]>='0'&&string1[i]<='9')
			c+=(string1[i]-48)*pow(a,b-i-1);
		if(string1[i]>='a'&&string1[i]<='z')
			c+=(string1[i]-87)*pow(a,b-i-1);
		if(string1[i]>='A'&&string1[i]<='Z')
			c+=(string1[i]-55)*pow(a,b-i-1);
	}
	int index = 0;
	int e;
	if(c==0)
		cout<<'0'<<endl;
	while(c!=0)
	{
		e=c%(int)d;
		c=c/d;
		if(e>=10)
			string2[index]='A'+e-10;
		else
			string2[index] ='0'+e;
		index++;
	}
	for(i=index-1;i>=0;i--)
		cout<<string2[i];
	cout<<endl;
	return 0;
}