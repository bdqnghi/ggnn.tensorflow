int main()
{
	int a,b,c,d,e,x;
	cin>>x;
	a=x%10;                                          //????????a
	b=(x-a)%100/10;                                  //????????b
	c=(x-a-10*b)%1000/100;                          //????????c
	d=(x-a-10*b-100*c)%10000/1000;                   //????????d
	e=(x-a-10*b-100*c-1000*d)%100000/10000;          //????????e
	if(e==1)                                          //????????1
		cout<<1;
	else if(d!=0)                                    //???????abcd
	   cout<<a<<b<<c<<d;
	else if(d==0&&c!=0)                              //???????abc
	   cout<<a<<b<<c;
	else if (d==0&&c==0&&b!=0)                       //???????ab
	   cout<<a<<b;
	else if(d==0&&c==0&&b==0)                        //???????a
		cout<<a;
	return 0;
}
