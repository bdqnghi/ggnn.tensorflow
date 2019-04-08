int main()
{
	char a[100],c;
	int s[100][2],len,k=0,i;
	cin.getline(a,100);
	for(len=0;a[len]!='\0';len++);
	c=a[0];
	s[k][0]=a[0];
	s[k++][1]=0;
	for(i=1;i<len;i++)
	{
		if(c==a[i])
		{
			s[k][0]=a[i];
			s[k++][1]=i;
		}
		else
			cout<<s[--k][1]<<' '<<i<<endl;
	}
	cin.get();cin.get();
	return 0;
}