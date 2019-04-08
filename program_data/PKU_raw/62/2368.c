
int main()
{
	char a[1000],t;
	int i=0;
	t=getchar();

	while(t>20)
	{
		while(t!=' ')
		{
			a[i]=t;
			t=getchar();
			i++;
			if(t<33)break;
		}
		if(t<32)break;
		while(t==' ')t=getchar();
		a[i]=' ';
		i++;
	}
	for(int k=0;k<i;k++)
		cout<<a[k];
	return 0;
}