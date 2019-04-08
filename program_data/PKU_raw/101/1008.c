int main()
{
	int a,b,c,s1,s2,s3;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				s1=(b>a)+(c==a)+1;
				s2=(a>b)+(a>c)+1;
				s3=(c>b)+(b>a)+1;
				if(a+b+c==6 && a*b*c==6)
				{
					if(s1+s2+s3==6 && s1*s2*s3==6)
					{
						if(s1+a==4&&s2+b==4&&s3+c==4)
						{
						if(s1==3)cout<<"A";
						if(s2==3)cout<<"B";
						if(s3==3)cout<<"C";
						if(s1==2)cout<<"A";
						if(s2==2)cout<<"B";
						if(s3==2)cout<<"C";
						if(s1==1)cout<<"A";
						if(s2==1)cout<<"B";
						if(s3==1)cout<<"C";
						//break;
						cout<<endl;
						}
					}
				}
			}
		}
	}

	return 0;
}