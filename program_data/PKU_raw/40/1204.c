int main()
{
	float a,b,c,d,e,s;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	s=sqrt(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360));
	if(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360)>=0)	
	printf("%.4f",s);
		if(((a+b+c+d)/2-a)*((a+b+c+d)/2-b)*((a+b+c+d)/2-c)*((a+b+c+d)/2-d)-a*b*c*d*cos(e*3.1415926/360)*cos(e*3.1415926/360)<0)
			printf("Invalid input");
return 0;
}