int main()
{
int n,i;
double ai,bi,ci,k,x1,x2,d,e;
cin>>n;
for(i=1;i<=n;i++){
	cin>>ai>>bi>>ci;
    k=bi*bi-4*ai*ci;
    if(k>0){
    	x1=(-bi+sqrt(k))/(2*ai);
    	x2=(-bi-sqrt(k))/(2*ai);
    	cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
    }
    if(k==0){
    	x1=x2=(-bi)/(2*ai);
    	cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
    }
    if(k<0){
    	d=(-bi)/(2*ai);
    	e=(sqrt(-k))/(2*ai);
    	if(d!=0)
    	    cout<<fixed<<setprecision(5)<<"x1="<<d<<"+"<<e<<"i"<<";"<<"x2="<<d<<"-"<<e<<"i"<<endl;
    	if(d==0)
    		cout<<fixed<<setprecision(5)<<"x1="<<abs(d)<<"+"<<e<<"i"<<";"<<"x2="<<abs(d)<<"-"<<e<<"i"<<endl;
    }
}
return 0;
}