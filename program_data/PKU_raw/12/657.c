
int main()
{
	int shuru[20] = {0};
	
	while (true)
	{
		int i = 1 , j , k , s , no;
		s=0;
		cin>>shuru[0];
		if(shuru[0]==-1)
			break;

		for(i=1;i<=15;i++)
		{
			cin>>shuru[i];
			if(shuru[i]==0)
				break;
			for(j=0;j<i;j++)
				if((shuru[j]==2*shuru[i])||(2*shuru[j]==shuru[i]))
					s++;
		}
		//cout << "yes  " << shuru[0] << endl;
		cout<<s<<endl;
		for(i=0;i<=14;i++)
		shuru[i]=0;
	}
	return 0;
}
