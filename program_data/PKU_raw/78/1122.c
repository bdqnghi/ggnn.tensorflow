int main()
{
	int a , b , c , d ;
	int A ,B ;
	for(a=10 ;a<=40; a+=10)
		for(b=40 ; b<=50 ; b+=10)
			for(c=10 ; c<=40 ; c+=10)
			{
				d=a+b-c ;
				A= (a+d)>(b+c) ;
				B= (a+c)<b ;
				if (A+B==2 && a!=b && a!=c && b!=c && d<=50)
				{
					if(b<d)
					{
						if(a<c)
						{
					cout<<"l "<<d<<endl;
				    cout<<"q "<<b<<endl;
					cout<<"s "<<c<<endl;
					cout<<"z "<<a<<endl;
						}
						else
						{
					cout<<"l "<<d<<endl;
				    cout<<"q "<<b<<endl;
					cout<<"z "<<a<<endl;
					cout<<"s "<<c<<endl;
						}
					}
					else
					{
						if(a<c&&c<d)
						{
					cout<<"q "<<b<<endl;
				    cout<<"l "<<d<<endl;
					cout<<"s "<<c<<endl;
					cout<<"z "<<a<<endl;
						}
						if(a<d&&d<c)
						{
					cout<<"q "<<b<<endl;
				    cout<<"s "<<c<<endl;
					cout<<"l "<<d<<endl;
					cout<<"z "<<a<<endl;
						}
						if(c<a&&a<d)
						{
					cout<<"q "<<b<<endl;
				    cout<<"l "<<d<<endl;
					cout<<"z "<<a<<endl;
					cout<<"s "<<c<<endl;
						}
						if(c<d&&d<a)
						{
					cout<<"q "<<b<<endl;
				    cout<<"z "<<a<<endl;
					cout<<"l "<<d<<endl;
					cout<<"s "<<c<<endl;
						}
				    

				
					}
			}
			}




   return 0 ;
}