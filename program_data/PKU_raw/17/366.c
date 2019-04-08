int getlength(char* a)//???????
{
	int i=0;
	while(a[i]!='\0')
		i++;
	return i;
}
void chuli(char ch[],int a[],int n)//???????????int???
{
	for(int i=0;i<n;i++)
	{
		switch(ch[i])
		{
		case '(':a[i]=1;break;
		case ')':a[i]=-1;break;
		default :a[i]=0;break;
		}
	}
}
void pipei(int a[],int n)//????????
{
	for(int k=0;k<n;k++)
	{
		if(a[k]==1)
		{
			int s=0;
			for(int i=0;i<k;i++)
				s+=a[i];
			for(int i=k;i<n;i++)
			{
				if(a[i]==-1)
				{
					int t=0;
					for(int j=0;j<i;j++)
						t+=a[j];
					if(s==t-1)//???? 
					{a[k]=0;a[i]=0;break;}//??????0
				}
			}
		}
	}
}
int main()
{
	while(cin.peek()!=EOF)
	{
		char ch[110];
		cin.getline(ch,110,'\n');
		int a[110];
		int n=getlength(ch);
		chuli(ch,a,n);
		pipei(a,n);
		cout<<ch<<endl;
		for(int i=0;i<n;i++)//??
		{
			switch(a[i])
			{
			case 1:cout<<'$';break;
			case -1:cout<<'?';break;
			case 0:cout<<' ';break;
			}		
                 }
		cout<<endl;
	}
	return 0;
}