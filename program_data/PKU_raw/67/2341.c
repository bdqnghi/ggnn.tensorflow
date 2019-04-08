int main()                                //?????
{                                         
	int n;                                //????
	cin>>n;                               //????
	int a,b;                              //????
	cin>>a>>b;                            //????
	double x=(0.01*b)/(0.01*a);           //???????
	for(int i=0 ; i<(n-1); i++)           //????
	{ 
		int c,d;                          //????
		cin>>c>>d;                        //????
		double y=(0.01*d)/(0.01*c);       //???????
		if(x-y>0.05)                      //????
			cout<<"worse"<<'\n';                //????
		else if(y-x>0.05)                 //????
			cout<<"better"<<'\n';               //????
		else                              
			cout<<"same"<<'\n';                 //????
	}


	return 0;                             //???????????????????
	


}

