
int main()
{
	char t;
	int in[100],i=0,an[100];
	t=getchar();
	while(t!=10)
	{
		in[i]=t-'0';
		i++;
		t=getchar();
	}
	int j=2,n=0,temp=in[0];
	if(i!=1)
	{
		temp=10*temp+in[1];
		if(temp>=13)
		{
			an[0]=temp/13;
			temp=temp%13;
			n++;
		}
		while(j!=i)
		{
			temp=10*temp+in[j];
			an[n]=temp/13;
			temp=temp%13;
			n++;j++;
		}
		if(!n)cout<<'0';
		for(int k=0;k<n;k++)cout<<an[k];
		cout<<endl;
		cout<<temp;
	}
	else cout<<"0\n"<<in[0];
	return 0;
}