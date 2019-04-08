

int main()
{
	char hello[33];
	int count,i=0;
	
	cin.getline(hello,33);
	
	
	while(hello[i]!='\0')
	{
		
		if(hello[i]>='0'&&hello[i]<='9') 
			{
				cout<<hello[i];
				count=0;
		    }
		else
		{
			if(count==0) 
				{
					cout<<endl;
					count++;
			    }
			
		}
		i++;
	}
	cout<<endl;
	return 0;
}

