void main()
{
 float a,b,c,d,D,S,s;
 float sums(float a,float b,float c,float d,float D);
 scanf("%f%f%f%f%f",&a,&b,&c,&d,&D);
 s=sums(a,b,c,d,D);
 if(s==0)printf("Invalid input");
	 else printf("%.4f",s);
}
float sums(float a,float b,float c,float d,float D)
{
 double Pi=3.1415926;
 float z,s,y;
 z=D/360*Pi;
 s=(a+b+c+d)/2;
 y=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*(float)cos(z)*(float)cos(z);
 if(y<0)return 0;
 else return sqrt(y);
}