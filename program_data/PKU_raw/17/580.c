void change(char b[],int n,int m)
{
	if(b[m]!=')'&&m<n)//????
	{
		change(b,n,m+1);
	}
	if(b[m]==')'&&m<n)
	{
		int i;
		for(i=m;i>=0;i--)
		{
			if(b[i]=='(')
			{
				b[i]='A';
				b[m]='A';
				break;
			}
		}
		change(b,n,m+1);
	}
}
int main()
{
	char a[200];
	cin>>a;
	getchar();
	while(a[0]!=0)
	{
    int num,j;
	num=strlen(a);
	cout<<a<<endl;
	change(a,num,0);
	for(j=0;j<num;j++)//?????
	{
		if(a[j]=='(')a[j]='$';
		else
			{if(a[j]==')')
			a[j]='?';
            else
			a[j]=' ';
		}
	}
	cout<<a<<endl;
	cin.getline(a,200);
   }
	return 0;
}