int main()
{
	int n,i,j,y,l;
	char x[100];
	y=1;
	cin>>n;
	cin.get();
	
	for(i=0;i<n;i++)
	{
		cin.getline(x,81,'\n');
		
		y=1;
		l=strlen(x);
		if(x[0]=='_'||(x[0]>='A'&&x[0]<='Z')||(x[0]>='a'&&x[0]<='z'))
		{


			for(j=0;j<l;j++)
			{
				if(((x[j]>='A'&&x[j]<='Z')||(x[j]>='a'&&x[j]<='z')||(x[j]>='0'&&x[j]<='9')||(x[j]=='_'))==0)
				{
					y=0;

				}
			}
			

			if(y==0)
			{
				cout<<"0"<<endl;
			}
			if(y==1)
			{
				cout<<"1"<<endl;
			}


				

		}
		else
		{
			cout<<"0"<<endl;
		}


	}
	



	return 0;
}