int main()
{
	char a[300][41],*p=NULL;
	int n=0;
	cin >>n;
	for(int i=0;i<n;i++)
		cin >>a[i];
	p=a[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		p=a[i];
		if(sum+strlen(a[i])>79)
		{
			i=i-1;
			sum=0;
			cout <<endl;
		}
		else if(sum+strlen(a[i])==79)
		{
			if(sum!=0)
				cout <<" ";
			do{
				cout <<*p;
				p=p+1;
			}while(*p!='\0');
			cout <<endl;
			sum=0;
		}
		else{
			if(sum!=0)
			{
				cout <<" ";
				sum=sum+1;
			}
			do{
				cout <<*p;
				p=p+1;
			}while(*p!='\0');
			sum=sum+strlen(a[i]);
		}
	}
	cout <<endl;
	return 0;
}
