int main()
{
	int a,b,c;
	for (a=0;a<=2;a++)
		for (b=0;b<=2;b++)
			for (c=0;c<=2;c++)
			{
				if (((a>b)+(c==a))==a && ((a<b)+(a<c))==b && ((c<b)+(b<a))==c ) 
				{
					if (b>c&&c>a)
						    cout<<"BCA";
					else if (a>c&&c>b)
					        cout<<"ACB";
					else if (b>a&&a>c)
					        cout<<"BAC";
					else if (a>b&&b>c)
						    cout<<"ABC";
					else if (c>a&&a>b)
						    cout<<"CAB";
					else if (c>b&&b>a)
						cout<<"CBA";
	
				}
			}
return 0;
}
