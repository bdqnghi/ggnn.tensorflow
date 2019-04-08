/*
 * ?????????????.cpp
 * ?????
 * ????: 2012-10-10
 * ????????????
 */
int main(){                                                  //?????
	double a=0.0,b=0.0,c=0.0,x1=0.0,x2=0.0,x3=0.0;    //????????a,b,c,x1,x2,x3,x4
	int n=1,n1=1;                                           //????n,n1
	cin>>n;                                                  //??n
	while (cin>>a>>b>>c,n1<=n)                                //????
    	{
		if ((b*b-4*a*c)>0)                                  //????
		{
			x1=(-1*b + sqrt(b*b-4*a*c))/(2*a);              //??x1
       	    x2=(-1*b - sqrt(b*b-4*a*c))/(2*a);              //??x2
       	    printf("x1=%.5f", x1);                          //?x1?????????
       	    cout<<";";                                     //????
       	    printf("x2=%.5f", x2);                          //?x2?????????
       	    cout<<endl;
		}
		else if((b*b-4*a*c)==0.0)                              //????
		{
			if((-1*b)/(2*a)==0)                              //????
				cout<<"x1=x2="<<0<<endl;                         //??0
			else
			    {x1=(-1*b)/(2*a);                               //??x1?x2
			    printf("x1=x2=%.5f",x1);                       //??x1?x2
			    cout<<endl;}
		}
       	else                                                 //????
       	{
       		x3=sqrt(-(b*b-4*a*c))/(2*a);                          //??x1?x2???
            if((-1*b)/(2*a)==0)                                    //????
       		    {
            	x1=0.0;
            	printf("x1=%.5f",x1);                           //??x1???
            	printf("+%.5f",x3);
       			cout<<"i"<<";";                               //??i
       			printf("x2=%.5f", x1);                        //??x2???
       			printf("-%.5f", x3);
       			cout<<"i"<<endl;                                //??i
       			}
       		else                                               //????
       			{x1=(-1*b)/(2*a);                              //??x1,x2???
		        printf("x1=%.5f", x1);                        //??x1???
		        printf("+%.5f",x3);                           //??x???
		        cout<<"i"<<";";                               //??i???
		        printf("x2=%.5f", x1);                        //??x2???
		        printf("-%.5f",x3);                           //??x2???
		        cout<<"i"<<endl;}                       //??i
       	}
       	n1++;                                               //n1??
        }
	return 0;
}                                                           //?????
