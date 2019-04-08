int main(){
	int n;
	float a,b,c;
	double x1,x2,m;
	scanf("%d\n",&n);
    for(int i=0;i<n;i++)
	{
	  scanf("%f%f%f",&a,&b,&c);
	  if(b*b-4*a*c>0)
	  {   
		  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		  x2=(-sqrt(b*b-4*a*c)-b)/(2*a);
	      printf("x1=%.5f;x2=%.5f\n",x1,x2);
	  }
	  else if(b*b-4*a*c==0)
	  {
	  if(b==0){x1=x2=0.00000;}
	  else {x1=x2=(-b)/(2*a);}
	  printf("x1=x2=%.5f\n",x1);
	  }
	  else if(b*b-4*a*c<0)
	  {
	  if(b==0) {x1=x2=b/(2*a);m=sqrt(-b*b+4*a*c)/(2*a);}
	  else {x1=x2=(-b)/(2*a);m=sqrt(-b*b+4*a*c)/(2*a);}
	  printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",x1,m,x2,m);
	  }
	}
	return 0;
}
