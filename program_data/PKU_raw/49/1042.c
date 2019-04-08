int main()
{
	char a[501];
	int len,s=0;
	cin.getline(a,501);
	len = strlen(a);
	for(int i=2;i<len;i++)
		for(int j=0;j<=len-i;j++)
		{	for(int k=0;k<=i/2-1;k++)
			{
				if(a[j+k]==a[j+i-1-k])
					s++;

			}
		if(s==i/2)
			{for(int m=j;m<=j+i-1;m++)
			cout<<a[m];
			cout<<endl;

		}
		s=0;
		}
	return 0;
}