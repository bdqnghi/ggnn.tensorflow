int main()
{
	char child[100],a;
	cin >>child;
	a=child[0];
	int i=0,j=0;
	while (child[0]!=0)
	{
		if (child[i]!=a&&child[i]!=0)
		{
			for (j=i-1;j>=0;j--)
				if (child[j]==a)
				{
					cout <<j <<" " <<i <<endl;
					child[i]=0;
					child[j]=0;
					break;
				}
		}
	    i++;
	}

	return 0;
}

