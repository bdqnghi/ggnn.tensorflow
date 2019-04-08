int main ()
{
	char a[100];
	cin.getline(a,100);
	int num,j,i=0,x;
  	int b[100];
	int r[100];
	r[0]=a[0]-'0';
	while(a[i]!='\0')
	{
		num=r[i]*10+a[i+1]-'0';
		r[i+1]=num%13;
		b[i]=num/13;
		i++;
	}
	for(j=0;j<=i-2;j++)
	{
		if(b[j]!=0)
			break;
	}
	if(j==i-1)
	{cout<<0;}
	else
	{x=j;
	for(j=x;j<=i-2;j++)
	{
		cout<<b[j];
	}
	}
	cout<<'\n'<<r[i-1]<<endl;
	return 0;
}