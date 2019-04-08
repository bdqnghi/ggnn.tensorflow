int main()
{
	int a,b,c,a1,a2,b1,b2,c1,c2,t=0;//????
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			for(c=0;c<3;c++)
			{
				a1=(b>a),a2=(c==a);
				b1=(a>b),b2=(a>c);
				c1=(c>b),c2=(b>a);//??????
				if(a1+a2==(2-a)&&(b1+b2==(2-b)&&c1+c2==(2-c)))//??????????????
				{
					if(a>b&&b>c)
						cout<<"CBA";
					else if(b>a&&a>c)
	                    cout<<"CAB";
					else if(c>a&&a>b)
					    cout<<"BAC";
					else if(c>b&&b>a)
						cout<<"ABC";
					else if(b>c&&c>a)
						cout<<"ACB";
					else if(a>c&&c>b)
						cout<<"BCA";//????
				}
			}
		
		}
		
	}

			
	return 0;
}