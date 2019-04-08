
long pow10[5];

inline int str2int(char* s,int lens)
{
	int i,r=0;
	for(i=lens-1;i>=0;i--)
		r+=(s[i]-'0')*pow10[lens-1-i];
	return r;
}


int main()
{
	int data[1000],n=0;
	char s[1000];
	gets(s);

	int head=0,l=0,index=0,i,b=1;

	long r=1;
	for(i=0;i<5;i++)
	{
		pow10[i]=r;
		r*=10;
	}

	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==',')
		{
			data[index]=str2int(s+head,i-head);
			index++;
			head=i+1;
		}
	}
	data[index]=str2int(s+head,i-head);
	n=index+1;

	if(n==1){cout<<"No"<<endl;return 0;}



	int m1=data[0],m2;
	for(i=0;i<n;i++)
		if(m1<data[i])m1=data[i];
	m2=0;
	int temp=0;
	for(i=0;i<n;i++)
		if(m2<data[i] && m1>data[i]){m2=data[i];temp=1;}
	if(temp)cout<<m2<<endl;
	else cout<<"No"<<endl;


	return 0;
}

