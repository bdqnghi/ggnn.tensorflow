int main()
{
	char a[110];
	int b[110];
	int c[110];
	char s1,s2;
	int i,j,k,l,m,n,q=0;
	cin.getline(a,110);//??
	n=strlen(a);
	s1=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[0])
		{s2=a[i];break;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==s2)//?????????
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]==s1)//??????
				{break;}
			}
			b[q]=j;c[q]=i;//??
			q=q+1;
			a[i]='\0';a[j]='\0';//??
		}

	}
	for(k=0;k<q;k++)
	{
		cout<<b[k]<<" "<<c[k]<<endl;//??
	}
	return 0;
}
