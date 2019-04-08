int main()
{
	int i,n,a,b,c;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(a%4!=0 || (a%100==0 & a%400!=0))
		{
            if(b==3 & c==11)
			    cout << "YES"<<endl;
		    else if(b==4 & c==7)
				cout << "YES"<<endl;
			else if(b==9 & c==12)
				cout << "YES"<<endl;
			else if(b==7 & c==4)
				cout << "YES"<<endl;
			else if(b==12 & c==9)
				cout << "YES"<<endl;
			else if(b==11 & c==3)
				cout << "YES"<<endl;
			else if(b==1 & c==10)
				cout << "YES"<<endl;
			else if(b==10 & c==1)
				cout << "YES"<<endl;
			else if(b==2 &c==11)
				cout << "YES"<<endl;
			else if(b==11 & c==2)
				cout << "YES"<<endl;
			else if(b==3 & c==2)
				cout << "YES"<<endl;
			else if(b==2 & c==3)
				cout << "YES"<<endl;
			else cout << "NO"<<endl;
		}
		else
		{
			if(b==3 & c==11)
			    cout << "YES"<<endl;
		    else if(b==4 & c==7)
				cout << "YES"<<endl;
			else if(b==9 & c==12)
				cout << "YES"<<endl;
			else if(b==7 & c==4)
				cout << "YES"<<endl;
			else if(b==12 & c==9)
				cout << "YES"<<endl;
			else if(b==11 & c==3)
				cout << "YES"<<endl;
			else if(b==1 & c==4)
				cout << "YES"<<endl;
			else if(b==1 & c==7)
				cout << "YES"<<endl;
			else if(b==7 & c==1)
				cout << "YES"<<endl;
			else if(b==4 & c==1)
				cout << "YES"<<endl;
			else if(b==2 & c==8)
				cout << "YES"<<endl;
			else if(b==8 & c==2)
				cout << "YES"<<endl;
			else cout << "NO"<<endl;
		}
	}
	return 0;
}