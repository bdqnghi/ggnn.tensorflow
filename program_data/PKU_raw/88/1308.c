int main()
{
	char a[31];
	int b[31]={0};
	int i,j,l;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
		if(a[i]<='9'&&a[i]>='0')
          b[i]=1;
		for(j=0;j<l;j++)
		{
			if(b[j]==1)
				cout<<a[j];
			else
				cout<<endl;
		}

   return 0;
}
