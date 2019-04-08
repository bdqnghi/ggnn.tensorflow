int main()
{
	int a,b,c;
	int Aa,Bb,Cc;
	for(a=1;a<4;a++)
		for(b=1;b<4;b++)
			for(c=1;c<4;c++)
			{
				Aa=(b>a)+(c==a);
							            Bb=(a>b)+(a>c);
							            Cc=(c>b)+(b>a);
							            if (a+Aa==3)
							            	            	if(b+Bb==3)
							            	            		if(c+Cc==3)

	            	if(a>b&&b>c)
	            		cout<<"CBA";
	            	else
	            if(a>c&&c>b)
	            	            		cout<<"BCA";
	            else
	            if(b>a&&a>c)
	            	            		cout<<"CAB";
	            else
	            if(b>c&&c>a)
	            	            		cout<<"ACB";
	            else
	            if(c>b&&b>a)
	            	            		cout<<"ABC";
	            else
	            if(c>a&&a>b)
	            	            		cout<<"BAC";
			}


return 0;
}