
char a[253],b[253],c[253];
int j;

int main()
{
	void f1(int length,int length2);
	void f2(int length,int length3);
	void f3(int length1,int length2,int length3);
	for (j=0;j<=250;j++)
		c[j]='0';
	cin>>a>>b;
	int length1,length2,length3=250,i;
	length1=strlen(a)-1;
	length2=strlen(b)-1;
	for (i=0;(length1>=0&&length2>=0);i++,length1--,length2--,length3--)
		f3(length1,length2,length3);
	if (length1==-1)
	    for (;length2>=0;length2--,length3--)
	    	f1(length2 ,length3);
	else
		for (;length1>=0;length1--,length3--)
			f2(length1 ,length3);
	int k=0;
	for (i=0 ; i <= 250 ; i++)
		if (c[i]!='0'||( c[i]=='0' && i==250) || k == 1)
		{
			cout<<c[i];
			k=1;
		}

	return 0;
}

void f1(int length,int length3 )
{
	int x,z;
		x=b[length]-'0';
		z=c[length3]-'0';
		if (x+z>=10)
		{
			c[length3]=(x+z)%10+'0';
			c[length3-1]=(x+z)/10+'0';
		}
		else
			c[length3]=x+z+'0';
}

void f2(int length,int length3 )
{
	int x,z;
		x=a[length]-'0';
		z=c[length3]-'0';
		if (x+z>=10)
		{
			c[length3]=(x+z)%10+'0';
			c[length3-1]=(x+z)/10+'0';
		}
		else
			c[length3]=x+z+'0';
}

void f3(int length1 ,int length2 ,int length3)
{
	int x,y,z;
	x=a[length1]-'0';
	y=b[length2]-'0';
	z=c[length3]-'0';
	if (x+y+z>=10)
	{
		c[length3]=(x+y+z)%10+'0';
		c[length3-1]=(x+y+z)/10+'0';
	}
	else
		c[length3]=x+y+z+'0';
}
