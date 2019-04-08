int main(int argc, char* argv[])
{
	int n,j;
	char i='i';
	scanf("%d",&n);
		for(j=0;j<n;j++){
			float a,b,c;
            scanf("%f%f%f",&a,&b,&c);
			double e,f,m,n;
				if((b*b-4*a*c)>0){
                    e=((-b)+sqrt(b*b-4*a*c))/(2*a);
                    f=((-b)-sqrt(b*b-4*a*c))/(2*a);
					printf("x1=%.5f;x2=%.5f\n",e,f);
				}
				else if((b*b-4*a*c)==0){
				          e=f=(-b)/(2*a);
						  printf("x1=x2=%.5f\n",e);
				}
					
				else{
                        m=(-b)/(2*a);
						n=sqrt(4*a*c-b*b)/(2*a);
						if(b==0)
					       printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",n,n);
						else
						   printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",m,n,m,n);
				}
					
				
		}
				


}

