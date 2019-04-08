int main()
{
	int i,j,k,n,s=0,d=0;
	char words[101];
	cin.getline(words,101);
	j=0;
	for(n=0;words[n]!='\0';n++) ;
	//cout<<n<<endl;
	//cout<<words[13]<<endl;
	for(i=n-1;i>=0;i--)
	{
		if(words[i]==32)
		{
			for(k=i+1;k<=i+j;k++)
			{
				cout<<words[k];
			}
			if(d==0)
			{
				cout<<" ";
				d=1;
			}
			s=1;
			j=0;
		}
		if(i==0)
		{
			if(s==1)
			{
			for(k=i;k<=j-1;k++) cout<<words[k];
			}
			if(s==0)
			{
				cout<<words;
			}
		}
		j++;
	}
	return 0;
}
