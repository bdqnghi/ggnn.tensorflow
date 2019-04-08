int main()
{
	int num,g,s,b,q,w;                        //????
	cin>>num;                                 //????
	if(num>9999)                              //if?????num?5??????????????
	{
		w=(num/10000)%10;
	    q=(num/1000)%10;
		b=(num/100)%10;
		s=(num/10)%10;
		g=num%10;
		cout<<g<<s<<b<<q<<w<<endl;             //?????
	}
	    else if(num>999)                             //if??
	    {
	               q=(num/1000)%10;
		     b=(num/100)%10;
		     s=(num/10)%10;
		     g=num%10;
		     cout<<g<<s<<b<<q<<endl;            //????
     	}
		     else if(num>99)                    //if??
		     {
		         b=(num/100)%10;
		         s=(num/10)%10;
		         g=num%10;
		         cout<<g<<s<<b<<endl;            //????
		     }
			     else if(num>9)
			{
                                   s=(num/10)%10;
		              g=num%10;
		              cout<<g<<s<<endl;           //????
			      }
	return 0;
}