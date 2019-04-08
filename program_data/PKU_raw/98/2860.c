int main()
{
	char a[100000];
	int n,i,j,count=0;
	cin>>n;
	cin.get();
	cin.getline(a,100000);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			cout<<a[i];count++;
		}
		if(a[i]==' ')
		{
			for(j=i+1;a[j]!='\0';j++)
			{
				if(a[j]==' ')
					break;
			}
			if((count-1)/80==(count+j-i-1)/80)
			{
				cout<<a[i];count++;
			}
			else
			{
				cout<<endl;count=0;
			}
		}
	}
	return 0;
}