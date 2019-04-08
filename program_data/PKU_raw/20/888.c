int main()
{
	char a[14]={' '};
	char b[4]={' '};
	while(cin.get(a,11,' '))
	{
		cin.get();
		cin.get(b,4,'\n');
		int k=0;
		char max=NULL;
		for(int j=0;j<strlen(a);j++)
			if(a[j]>max)
			{
				max=a[j];
			    k=j;
			}
		for(int i=strlen(a)-1;i>k;i--)
			a[i+3]=a[i];
		a[k+1]=b[0];
		a[k+2]=b[1];
		a[k+3]=b[2];
		cout<<a<<endl;
		for(int p=0;p<14;p++)
			a[p]='\n';
	}
	return 0;
}