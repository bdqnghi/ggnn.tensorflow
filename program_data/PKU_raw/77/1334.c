int f(int i,int j,char a[101])
{
	int p=0;    
	if ((i-j)==1)
		return 1;
	else 
	{  for (int k=j+1;k<i;k++)
	{
		if (a[k]!='0')
			p++;
	}                   
	if (p==0)
		return 1;
	if (p!=0)
		return 0;
	}
}        
int main()
{
	char a[101];
	cin>>a;
	char c,d;
	int m=0;
	c=a[0];
	for (int i=0;i<101;i++)
	{
		if (a[i]=='\0')
			break;
		m++;
	}
	for (int i=0;i<m;i++)  
		if (a[i]!=a[0])
			d=a[i];

	for (int j=0;j<m;j++)
		for (int i=0;i<j;i++) 
		{
			if (a[j]==d&&a[i]==c&&f(j,i,a)==1)
			{
				a[i]='0';
				a[j]='0';
				cout<<i<<" "<<j<<endl;

			}
		}                      
		return 0;
}    
