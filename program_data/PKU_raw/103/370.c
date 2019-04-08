int main()
{
	char a[1100];
	gets(a);
	int i,j,k,count=0;
	char b=0;
	i=0;
	while(1)
	{
		if(i>strlen(a))break;
		if(a[i]<='z'&&a[i]>='a')a[i]+='A'-'a';
		if(b==0){b=a[i];count=1;i++;continue;}
		if(a[i]==b)
			count++;
		else
		{
				
				cout<<"("<<b<<","<<count<<")";b=a[i];count=1;
			}
		i++;
	}

	return 0;
}