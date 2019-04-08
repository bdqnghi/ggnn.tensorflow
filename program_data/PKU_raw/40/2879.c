double area1(double a,double b,double c,double d,double j);
int main()
{  
	double e,f,g,h,i,j,y;
	scanf("%lf%lf%lf%lf%lf",&e,&f,&g,&h,&i);
	if(i>0&&i<360){
	    j=PI*i/360;
	    y=area1(e,f,g,h,j);
	    if(y!=-1){
	    printf("%.4lf",y);
		}else{
	    	printf("Invalid input");
		}
	}
	return 0;
}double area1(double a,double b,double c,double d,double j)
{
	double s,S;
	s=(a+b+c+d)/2.0;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j));
	if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j)<0){S=-1;}
	return S;
}