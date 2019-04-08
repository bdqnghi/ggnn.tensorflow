
int main()
{
	char a[1000]={0},b[1000]={0};
	int i=0,n=0;
	cin.getline(a,1000,' ');
	cin.getline(b,1000,'\n');
	for(i=0;a[i]!=0;i++)
		n++;
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n-1;y++)
		{
			if(a[y]>a[y+1])
			{
				char temp;
				temp=a[y];
				a[y]=a[y+1];
				a[y+1]=temp;
			}
		}
	}
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n-1;y++)
		{
			if(b[y]>b[y+1])
			{
				char temp;
				temp=b[y];
				b[y]=b[y+1];
				b[y+1]=temp;
			}
		}
	}
	if(!strcmp(a,b))
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
}