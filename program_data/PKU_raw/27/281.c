/**
* @file homework.cpp
* @author ???
* @date 2011-09-27
* @description
* ??????: ?????????
*/
int main()
{
    int n,k;double a,b,c,x,y; // ???????a,b,c??????x,y
	cin >> n; // n????????
    for(k=0;k<n;k++) // ?????
	{
	    cin>>a>>b>>c; // ?????
        if(b * b - 4 * a * c>0) 
		    {
				x = (- b + sqrt(b * b - 4 * a * c))/(2 * a);
				y = (- b - sqrt(b * b - 4 * a * c))/(2 * a); // ?????????????
	        if(x==-0.00000) x=0.00000; if(y==-0.00000) y=0.00000; // ?????-0.00000??? 
	            cout<<fixed<<setprecision(5)<<"x1="<<x<<";x2="<<y<<endl;
		    }
	    else if(b * b - 4 * a * c == 0) 
		{
			x = (- b)/(2 * a); // ?????
		    if(x == -0.00000) x = 0.00000; if(y == -0.00000) y = 0.00000;
		    cout<<fixed<<setprecision(5)<<"x1=x2="<<x<<endl;
		}
	    else 
		 {
			 x = (- b)/(2 * a);y = (sqrt(4 * a * c - b * b))/(2 * a); // ?????
			 if(x == -0.00000) x = 0.00000; if(y == -0.00000) y = 0.00000;
			     cout<<fixed<<setprecision(5)<<"x1="<<x<<"+"<<y<<"i;x2="<<x<<"-"<<y<<"i"<<endl;
		 }                 
	}
    return 0;
}