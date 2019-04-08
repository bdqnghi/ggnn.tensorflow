

int main()
{ 
	char a[251],b[251];
	int A[251]={0},B[251]={0},c[251]={0},i,p;
	cin.getline(a,251);
	cin.getline(b,251);
	for(i=strlen(a)-1;i>=0;--i)
		A[strlen(a)-1-i]=a[i]-'0';
	for(i=strlen(b)-1;i>=0;--i)
		B[strlen(b)-1-i]=b[i]-'0';
	for(i=0;i<251;++i)
	{
		p=A[i]+B[i];
		if(p+c[i]>9)
		{
			c[i]=(p+c[i])%10;
			c[i+1]++;
		}
		else
			c[i]+=p;
	}
	for(i=250;i>=0;i--)
	{
		if(c[i]!=0)
			break;
	}
	if(i!=-1)
	{
	for(p=i;p>=0;p--)
		cout<<c[p];
	}
	else 
		cout<<0;
}
