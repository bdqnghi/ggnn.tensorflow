

int main()
{
	char ch[200];
	char*a[30];
	int i,k;

	for(i=0;i<30;i++)
	{
		a[i]=NULL;
	}
	cin.getline(ch,110);
	a[0]=strtok(ch," ");
	i=1;
	while((a[i]=strtok(NULL," "))!=NULL)
	{
		i++;
	}
	for(k=0;k<i-1;k++)
	{
		cout<<a[k]<<' ';
	}
	cout<<a[i-1];
	return 0;
}