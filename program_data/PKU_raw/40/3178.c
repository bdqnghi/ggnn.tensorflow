main()
{
	float a,b,c,d,s,S,k;
	scanf ("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&k);
	s= (a+b+c+d)/2;
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*3.1415926/360)*cos(k*3.1415926/360));
	if ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(k*3.1415926/720)*cos(k*3.1415926/720)>=0)
	printf ("%.4f",S); 
	else
	printf ("Invalid input");
} 