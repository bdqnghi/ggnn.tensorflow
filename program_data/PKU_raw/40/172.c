int main()
{
	double s,a,b,c,d,k,m;
	cin>>a>>b>>c>>d>>k;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow((cos(3.1415926*k/360)),2)<0)
		cout<<"Invalid input";
	else{
m = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow((cos(3.1415926*k/360)),2)); 
printf("%.4f",m);
	}
return 0;
}
