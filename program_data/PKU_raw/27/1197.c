/*
 * phoenix3.cpp
 *Author: ???
 *  Created on: 2013-9-27
 *      ?????????
 */


int main()
{
	float a,b,c;
	double d,derta,g,h,f,k;
	int n,i=0;
	cin>>n;
	for(i=0;i<n;i++)
	 {
		cin>>a>>b>>c;
		d=-b/(2*a);
		if(fabs(d)<1e-10) d=-d;
		derta=b*b-4*a*c;
		if(derta==0)
		{
			 cout<<"x1=x2=";
			 printf("%.5f\n\n",d);

	     }
	    else
	    {
	    	if(derta<0)
	       	{
	    	  f=sqrt(-derta);
	    	  k=f/(2*a);
	    	  cout<<"x1=";
	    	  printf("%.5f",d);
	    	  cout<<"+";
	    	  printf("%.5f",k);
	    	  cout<<"i"<<";"<<"x2=";
	    	  printf("%.5f",d);
	    	  cout<<"-";
	    	  printf("%.5f",k);
	    	  cout<<"i"<<'\n'<<endl;
	       	}
	    	else
	    	{
	    		f=sqrt(derta);
	    		k=f/(2*a);
	    		g=d+k;h=d-k;
	    		cout<<"x1=";
	    		printf("%.5f",g);
	    		cout<<";";
	    		cout<<"x2=";
	    		printf("%.5f",h);
	    		cout<<'\n'<<endl;
		    }
	    }
	 }
	return 0;
}





