


int main()
{
	int a=1 , b=1 ,c=1;
	while(a <= 3)
	{
		b=1;
		while(b <= 3)
		{
			c=1;
			while(c <= 3)
			{
				if((a!=b)&&(b!=c)&&(c!=a))
				{
					if((a>b)&&(b>c))            //??????a>b>c,????????a>b?????1?c??????
					{
						if((!(b>a)&&!(c==a))+((a>b)&&!(a>c))+((c>b)&&(b>a))== 3)
							cout<<"CBA";
						else if((!(b>a)&&!(c==a))+(!(a>b)&&(a>c))+((c>b)&&(b>a))== 3)
							cout<<"CBA";

					}
					else if((a>c)&&(c>b))
					{
						if((!(b>a)&&!(c==a))+((a>b)&&(a>c))+((c>b)&&!(b>a))== 3)
							cout<<"BCA";
						else if((!(b>a)&&!(c==a))+((a>b)&&(a>c))+(!(c>b)&&(b>a))== 3)
							cout<<"BCA";
					}
					else if((b>a)&&(a>c))
					{
						if(((b>a)&&!(c==a))+(!(a>b)&&!(a>c))+((c>b)&&(b>a))== 3)
				            cout<<"CAB";
						else if((!(b>a)&&(c==a))+(!(a>b)&&!(a>c))+((c>b)&&(b>a))== 3)
						    cout<<"CAB";
					}
					else if((b>c)&&(c>a))
					{
						if(((b>a)&&(c==a))+(!(a>b)&&!(a>c))+((c>b)&&!(b>a))== 3)
							cout<<"ACB";
						else if(((b>a)&&(c==a))+(!(a>b)&&!(a>c))+(!(c>b)&&(b>a))== 3)
							cout<<"ACB";
					}
					else if((c>a)&&(a>b))
					{
						if(((b>a)&&!(c==a))+((a>b)&&(a>c))+(!(c>b)&&!(b>a))== 3)
							cout<<"BAC";
						else if((!(b>a)&&(c==a))+((a>b)&&(a>c))+(!(c>b)&&!(b>a))== 3)
							cout<<"BAC";
					}
					else if((c>b)&&(b>a))
					{
						if(((b>a)&&(c==a))+((a>b)&&!(a>c))+(!(c>b)&&!(b>a))== 3)
							cout<<"ABC";
						else if(((b>a)&&(c==a))+(!(a>b)&&(a>c))+(!(c>b)&&!(b>a))== 3)
							cout<<"ABC";
					}

				}
				c=c+1;
			}
			b=b+1;
		}
		a=a+1;
	}
	return 0;
}
