int main()
{
	int a,b,c,x,y,z;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
		{
			if(b==a) continue;
			c=6-a-b;
			x=(b>a)+(c==a);///////////////////?????????????????
	        y=(a>b)+(a>c);
            z=(c>b)+(b>a);
		    if( a+x==b+y&&b+y==c+z )
			{
				if(a>b&&b>c) cout<<"CBA"<<endl;
				if(a>c&&c>b) cout<<"BCA"<<endl;
				if(b>a&&a>c) cout<<"CAB"<<endl;
				if(b>c&&c>a) cout<<"ACB"<<endl;
				if(c>a&&a>b) cout<<"BAC"<<endl;
				if(c>b&&b>a) cout<<"ABC"<<endl;
			}
		}
			return 0;
}