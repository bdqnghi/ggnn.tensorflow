int main()
{
	char s[100],u[100];
	int a,b,l,k=0,i,j,r,l1;
	cin>>a>>s>>b;
	l=strlen(s);
	int sum=1;
    for(i=0,j=l-1;j>=0;i++,j--)
	{
		if(s[j]>=65)
		{
			if(s[j]>=97)
				k=k+(s[j]-87)*sum;
			else
				k=k+(s[j]-55)*sum;
		}
		else
        k=k+(s[j]-48)*sum;
		sum=sum*a;
	}
	if(k==0)
		cout<<"0"<<endl;
	else
	{
    for(j=0;k!=0;j++)
	{
		r=k%b;
	    if(r>=10)
			u[j]=r-10+'A';
		else
			u[j]=r+'0';
		k=k/b;
	}
	u[j]='\0';
	l1=strlen(u);
	for(j=l1-1;j>=0;j--)
		cout<<u[j];
	cout<<endl;
	}
	return 0;
}





    