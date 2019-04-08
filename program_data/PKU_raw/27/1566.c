
int main(int argc, char* argv[])
{
	int i;
	int n;
	double e,f;
	double a,b,c;
	double x1,x2;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		scanf("%lf %lf %lf",&a,&b,&c);
		if(b*b-4*a*c>0){
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);			
			x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(b*b-4*a*c==0){
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
		else if(b*b-4*a*c<0){
			if(b==0){
				e=0;
                f=(sqrt(4*a*c-b*b))/(2*a);
			}
			else{
				e=-b/(2*a);
				f=(sqrt(4*a*c-b*b))/(2*a);
			}
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,f,e,f);
		}
	}
return 0;	
} 
