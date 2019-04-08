int main()
{
	int a,b,c,d;
	cin>>d;
	a=d%3;
	b=d%5;
	c=d%7;
	if(a==0&&b==0&&c==0)
		cout<<3<<" "<<5<<" "<<7;
		else
		if(a==0&&b==0)
			cout<<3<<" "<<5;
		else
			if(a==0&&c==0)
				cout<<3<<" "<<7;
			else
				if(c==0&&b==0)
					cout<<5<<" "<<7;
				else
					if(a==0)
						cout<<3;
					else
						if(b==0)
							cout<<5;
						else
							if(c==0)
								cout<<7;
							else
								cout<<"n";
							
}