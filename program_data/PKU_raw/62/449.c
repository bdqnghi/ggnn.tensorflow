int main()
{
	char a[200];
	int i=0,t=0,j=0;
	cin.getline(a,200,'\n');
	while(a[t]!='\0')
		t++;
	for(i;i<t;i++)
		if((a[i]==' ')&&(a[i-1]==' '))
		{
			int u=i;
			for(u;u<t;u++)
				a[u]=a[u+1];
			i--;
		}
		while(a[j]!='\0')
		{
			cout<<a[j];
			j++;
		}
	
	return 0;
}