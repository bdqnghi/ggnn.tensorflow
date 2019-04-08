//************************************************************
//*? ? ?:????                                         *
//*?    ?: ???                                          *
//*????:2010-10-25                                       *
//*????:?2--35???????????????            *
//************************************************************
int main()
{
	int i,b,c=0,d,j,count=0;
	double a,e;
	char char_a[32],char_b[32];//????????????????32?????????32?
	cin>>a;
	cin>>char_a;//?????char_a
	cin>>b;
	for(i=0;i<strlen(char_a);i++)//??????????10???????
	{
		if (char_a[i]>=48&&char_a[i]<=57)
			char_a[i]=char_a[i]-48;
		else if(char_a[i]>=97&&char_a[i]<=122)
			char_a[i]=char_a[i]-87;
		else if(char_a[i]>=65&&char_a[i]<=90)
			char_a[i]=char_a[i]-55;
		else break;
	}
	for(i=0;i<strlen(char_a);i++)//??????????10???????
	{
		e=strlen(char_a)-i-1;
		c=c+char_a[i]*pow(a,e);
	}
	j=0;
    if(c<b)
	{
		cout<<c<<endl;
		return 0;
	}
	while(c>=b)//?10??????????
	{
		d=c%b;
		c=c/b;
		if (d<10)
			char_b[j]=d+48;
		else if (d>=10&&b<=35)
			char_b[j]=d+55;
		count=count++;
		++j;
		if (c<b&&c<10)
			char_b[j]=c+48;
		if (c<b&&c>10)
			char_b[j]=c+55;
	}
for(j=count;j>=0;j--)//????
{
	cout<<char_b[j];
}
cout<<endl;
return 0;
}//?????
