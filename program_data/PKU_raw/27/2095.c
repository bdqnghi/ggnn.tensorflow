/*
 *???????(8.3) ????????? (1051)
 *??????
 *???2012?10?15? 18:15:34
 *?????????? ax2 + bx + c = 0 ?????a???0?
 */



int main(){
	float a=0.0,b=0.0,c=0.0;
	double x1=0.0,x2=0.0,x3=0.0,x4=0.0,D=0.0;
	int n=0;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		D=b*b-4*a*c;
		if(D>=0){
			x1=(-b+sqrt(D))/(2*a) ;
			x2 =(-b-sqrt(D))/(2*a);
		}
		else{
			x3=(-b)/(2*a);
			x4=sqrt(-D)/(2*a);
		}
        if(x1==0){
			x1=0.0;
		}
		if(x2==0){
			x2-0.0;
		}
		if(x3==0){
			x3=0.0;
		}
		if(D>0){
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
		}
		  else if(D==0){
			  cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		  }
		    else{
				cout<<fixed<<setprecision(5)<<"x1="<<x3<<"+"<<x4<<"i;x2="<<x3<<"-"<<x4<<"i"<<endl;
			}
	}
	return 0;
}