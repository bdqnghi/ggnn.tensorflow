char ch[600],length;
void search(int x,int y,int z)
{
	int i;
	for(i=0;i<z;i++)
		if(ch[x-i]!=ch[y+i])return;
	for(i=x-z+1;i<=y+z-1;i++)
		cout<<ch[i];
	cout<<endl;
}
int main()
{
	int i,j,k;
	cin>>ch;
	length=strlen(ch);
	for(i=2;i<=length;i++)
	{
		for(j=(i-1)/2;j<=length-i/2-1;j++)
		{
			if(i%2==0)search(j,j+1,i/2);
			else search(j-1,j+1,i/2);
		}
	}
	return 0;
}