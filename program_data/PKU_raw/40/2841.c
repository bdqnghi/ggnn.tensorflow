
float s2(float a,float b,float c,float d,float anglesum);

int main(int argc, char* argv[])
{
	float a,b,c,d,anglesum,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&anglesum);
	s=s2(a,b,c,d,anglesum);
	if(s<0){
		printf("Invalid input\n");
	}else{
		S=sqrt(s);
		printf("%.4lf",S);
	}
	return 0;
}

float s2(float a,float b,float c,float d,float anglesum)
{
	float s2,s;
	s=(a+b+c+d)/2;
	s2=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(anglesum*PI/360)*cos(anglesum*PI/360); 
	return s2;
}