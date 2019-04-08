int b[100];
int fe(int n)
{
	int i,t=0;
	for(i=0;;i++)
	{
		if(b[i]==0)t++;
		if(t==n)break;
	}
	return i;
}
int m(int n)
{
	int i;
	for(i=fe(n)-1;i>=0;i--)
	{
		if(b[i]==1)break;
	}
    return i;
}
void hands(int n)
{
	if(n>1)
	{
		hands(n-1);
		cout<<m(n)<<" "<<fe(n)<<endl;
		b[m(n)]=-1;
	}
	else
	{	
		cout<<m(1)<<" "<<fe(1)<<endl;
        b[m(1)]=-1;
	}
}


int main()
{
	char a[100];
	int i,j;
	cin>>a;
    for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==a[0])b[i]=1;
		else b[i]=0;
	}
	hands(i/2);
	return 0;
}