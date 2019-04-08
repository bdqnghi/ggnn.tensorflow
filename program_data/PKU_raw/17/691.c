int main()
{
	int i=0,j=0,m=0,n=0,k=0;
	char s[105];
	while(cin.getline(s,105,'\n'))
	{
		int zuo[100],you[100],flag[105]={0};
		char a[105];
		for(i=0;s[i]!='\0';i++)
		{
			a[i]=' ';
		}
		a[i]='\0';
		m=0;
		n=0;
		for(j=0;j<i;j++)
		{
			if(s[j]=='(')
				zuo[m++]=j;
			if(s[j]==')')
				you[n++]=j;
		}
		for(j=0;j<n;j++)
		{
			for(k=you[j]-1;k>=0;k--)
			{
				if(s[k]=='('&&flag[k]==0)
				{  
					flag[k]=1;
					flag[you[j]]=1;
					break;
				}
			}
		}
		for(k=0;k<i;k++)
		{
			if(flag[k]==0&&s[k]=='(')
				a[k]='$';
			if(flag[k]==0&&s[k]==')')
				a[k]='?';
		}
		cout<<s<<endl;
		cout<<a<<endl;
	}
	return 0;
}