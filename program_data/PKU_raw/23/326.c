int main()
{
	int num=0,i=0;
	char c,st[100][100];
	while(1)
	{
		cin>>st[i];
		i++;
		num++;
		c=cin.get();
		if(c==' ')
			continue;
		break;
	}
	for(i=num-1;i>0;i--)
	{
		cout<<st[i]<<" ";
	}
	cout<<st[0]<<endl;
	return 0;
}