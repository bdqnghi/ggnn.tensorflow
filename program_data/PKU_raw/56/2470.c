int main()                                      //???
{                                               //?????
    int x,y,a,b,c,d,e;                          //??x,y,a,b,c,d,e?????
    cin>>x;                                     //??x
    if (x<10)  cout<<x<<endl;                   //?x????????????          
    else if (x<100)                             //?x???????????? 
	{
		a=x%10;
	    b=(x-a)/10;
		y=a*10+b;
		cout<<y<<endl;
	}
	else if (x<1000)                            //?x???????????? 
	{
		a=x%10;
		b=((x-a)/10)%10;
		c=floor(x/100);
		y=a*100+b*10+c;
		cout<<y<<endl;
	}
	else if (x<10000)                           //?x???????????? 
	{
		a=x%10;
		b=((x-a)/10)%10;
		d=floor(x/1000);
		c=floor(x/100)-10*d;
		y=a*1000+b*100+c*10+d;
        cout<<y<<endl;
	}
	else if (x<100000)                           //?x???????????? 
	{
		a=x%10;
        b=((x-a)/10)%10;
		c=((x-a-10*b)/100)%10;
		e=floor(x/10000);
		d=floor(x/1000)-10*e;
		y=a*10000+b*1000+c*100+d*10+e;
		cout<<y<<endl;
	}
    return 0;
}                                                //?????