int main()
{
	char queue[100];
	cin.getline(queue,100);
	int i,j;
	for(i=1;i<strlen(queue);i++)
	{
		if(queue[i]!=queue[0])
		{
			queue[i]=')';
		}
		if(queue[i]==queue[0])
		{
			queue[i]='(';
		}
	}
	queue[0]='(';
	for(i=0;i<strlen(queue);i++)
	{
		if(queue[i]==')')
		{
			j=i-1;
			while((queue[j]=='*')&&(j>0))
			{
				j=j-1;
			}
			cout<<j<<" "<<i<<endl;
			queue[j]='*';
			queue[i]='*';
		}			
	}
	return 0;
}