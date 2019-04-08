// ?????9.cpp : ??????????????
//?????
//???1200018415
int main()
{
	int k,i,y;
double a1 = 0,b1 = 0,c1 = 0,d1 = 0;                           //?????a1,b1,c1,d1????0
	cin>>k;                                                 //????
	double a,b,c,d;                                         //???????
	for(i = 1;i <= k;i++)                                       //????
	{
	cin>>y;                                              //????
		if(y <= 18)                                           //????
			a1++;                                            
		if((y >= 19) && (y <= 35))                                 //????
			b1++;                                              
		if((y >= 36) && (y <= 60))                                  //????
			c1++;                                               
		if(y >= 61)                                             //????
			d1++;                                               
	}
a=a1 / k * 100;                                                   //????????
b=b1 / k * 100;                                                   //?????????
c=c1 / k * 100;                                                     //?????????
d=d1 / k * 100;                                                       //?????????
cout<<"1-18: "<<fixed<<setprecision(2)<<a<<"%"<<endl;             
cout<<"19-35: "<<fixed<<setprecision(2)<<b<<"%"<<endl;            
cout<<"36-60: "<<fixed<<setprecision(2)<<c<<"%"<<endl;             
cout<<"60??: "<<fixed<<setprecision(2)<<d<<"%"<<endl;             //????
return 0;
}                                                                  //?????

