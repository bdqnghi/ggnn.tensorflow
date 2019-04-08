int main()
{
	int a=0;
	cin>>a;
	if(a%3==0&&a%5==0&&a%7==0)
		cout<<3<<" "<<5<<" "<<7;
	else 
		if(a%3!=0&&a%5==0&&a%7==0)
			cout<<5<<" "<<7;
		
		else 
			if(a%3==0&&a%5!=0&&a%7==0)
				cout<<3<<" "<<7;
			
			else 
				if(a%3==0&&a%5==0&&a%7!=0)
					cout<<3<<" "<<5;
				else 
					if(a%3!=0&&a%5==0&&a%7!=0)
						cout<<5;
					
					else 
						if(a%3!=0&&a%5!=0&&a%7==0)
							cout<<7;
						
						else 
							if(a%3==0&&a%5!=0&&a%7!=0)
								cout<<3;
							
else 
								
cout<<"n";
return 0;
								
								
								
								
}