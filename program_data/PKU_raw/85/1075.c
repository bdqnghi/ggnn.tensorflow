
int main()
{
	char a[100];
	int n,i,j,flag;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=0;j<100;j++)
			a[j]='\0';
		
		cin.getline(a,100);
		if(a[0]!=95&&(a[0]<65||(a[0]>90&&a[0]<97)||a[0]>122))
		{
			cout<<"no"<<endl;
			continue;
		}
		else 
		{
			for(j=1;a[j]!='\0';j++)
			{
				if(a[j]!=95&&(a[j]<65||(a[j]>90&&a[j]<97)||a[j]>122)&&(a[j]<48||a[j]>57))
				{
					cout<<"no"<<endl;
					flag=0;
					break;
				}
			}
			if(flag==1)
				cout<<"yes"<<endl;
		}
	}
	return 0;
}