
int main()
{
	char s1[251],s2[251],s3[252],c;
	int i,l1,l2,l3,s,temp=0;
	cin>>s1>>s2;
	l1=strlen(s1);
	l2=strlen(s2);
	if (l1<l2)
	{
		for (i=0;i<=l2;i++)
		{
			c=s1[i];
			s1[i]=s2[i];
			s2[i]=c;
		}
		l3=l1;
		l1=l2;
		l2=l3;
	}
	for (i=l2-1;i>=0;i--)
		s2[i+l1-l2]=s2[i];
	for (i=0;i<l1-l2;i++)
		s2[i]='0';
	for (i=l1-1;i>=0;i--)
	{
		s=s1[i]-'0'+s2[i]-'0'+temp;
		if (s>9)
		{
			temp=1;
			s3[i]=s-10+'0';
		}
		else
		{
			temp=0;
			s3[i]=s+'0';
		}
	}
	s3[l1]='\0';
	
	if (temp)
	{
		l3=strlen(s3);
		for (i=l3;i>=0;i--)
			s3[i+1]=s3[i];
		s3[0]='1';
	}

	int counter=0;
	l3=strlen(s3);
	for (i=0;i<l3;i++)
	{
		if (!counter)
		{
			if (s3[i]!='0')
			{
				cout<<s3[i];
				counter++;
			}
		}
		else
			cout<<s3[i];
	}
	if (!counter)
		cout<<"0";
	cout<<endl;
	return 0;
}