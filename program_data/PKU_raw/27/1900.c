int main()
{
float a,b,c;
double m,n,x,y;
cin>>n;
for(m=1;m<=n;m=m+1){
	cin>>a>>b>>c;
	if(b*b-4*a*c>=0){
	x = (-b + sqrt(b*b-4*a*c))/(2*a); 
    y = (-b - sqrt(b*b-4*a*c))/(2*a);
	if(x!=y)
	printf("x1=%.5f;x2=%.5f\n",x,y);
	else if(x==y)
		printf("x1=x2=%.5f\n",x);}
	else if(b*b-4*a*c<0){
		x=b/2/a*(-1);
		y=(sqrt(-b*b+4*a*c))/2/a;
		if(x!=0)
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x,y,x,y);
		else if(x==0)
	    printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",y,y);
	}
}
return 0;
}