int main()
{
	double a,b,c;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c;
	double delta=b*b-4*a*c;
	if(delta==0){cout<<"x1=x2=";//?????Delta 
	printf("%.5f",((-b/(2*a))));
	cout<<endl;}
	else if(delta>0){
	cout<<"x1=";
	printf("%.5f",((-b+sqrt(delta))/(2*a)));
	cout<<";"<<"x2=";
	printf("%.5f",((-b-sqrt(delta))/(2*a)));
	cout<<endl;}
	if(delta<0){
		delta=-delta;
		cout<<"x1=";
	if(b==0){
     	printf("%.5f",(b/(2*a)));}
	    else {printf("%.5f",(-b/(2*a)));}
		cout<<"+";printf("%.5f",(sqrt(delta)/(2*a)));
		cout<<"i"<< ";x2=";
		if(b==0){
     	printf("%.5f",(b/(2*a)));}
	    else {printf("%.5f",(-b/(2*a)));}
		cout<<"-";
		printf("%.5f",(sqrt(delta)/2/a));
		cout<<"i"<< endl;
	}} return 0;
}