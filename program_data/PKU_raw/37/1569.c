int main()
{
	int n,i,j,k,number;
	char str[100000];
	char t;
	int array[100000];
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin.getline(str,100000,'\n');
		for(j=0;j<100000;j++)
			array[j]=0;
		for(j=0;str[j+1]!='\0';j++)
		{
			if(array[j]==0)
			{
				for(k=j+1;str[k]!='\0';k++)
					if(str[k]==str[j])
					{
						array[k]=1;
						array[j]=1;
					}
			}
		}
		number=0;
		for(j=0;str[j]!='\0';j++)
			if(array[j]==0)
			{
				cout<<str[j]<<endl;
				number++;
				break;
			}
		if(number==0)
			cout<<"no"<<endl;
	}
	return 0;
}
