
int main()
{
	int n;
	cin>>n;
	char a[1000][40]={'\0'};
	char *p=*a;
	int num[1000]={0};
	int *q=num;
	int i;
	for(i=0;i<n;i++)
		{
			cin>>*(a+i);
			*(q+i)=strlen(*(a+i));
	    }
	int count=*q;
	cout<<*a;
	for(i=1;i<n-1;i++)
	{
		if(count+*(q+i)+1<=80)
			{
				cout<<" "<<*(a+i);
				count+=*(q+i)+1;
				continue;
		    }
		if(count+*(q+i)+1>80)
		{
			cout<<endl;
			cout<<*(a+i);
			count=*(q+i);
			continue;
		}
	}
	if(count+*(q+n-1)+1<=80)
		cout<<" "<<*(a+n-1);
	else 
	{
		cout<<endl;
		cout<<*(a+n-1);
	}
	return 0;
}