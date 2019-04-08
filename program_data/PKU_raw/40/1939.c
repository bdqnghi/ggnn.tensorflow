int main()
{
float a,b,c,d,e,f,g,s,S;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
s=(a+b+c+d)/2;
f=(float)(e*(PI/180));
g=(float)(cos(f/2));
S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*g*g); 
if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*g*g)>=0)
printf("%.4f",S);
else
printf("Invalid input");
	return 0;
}
