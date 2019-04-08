void main()
{
    long int f(long int a,long int b);
    long int n,k;
    scanf("%ld%ld",&n,&k);
    printf("%ld",f(n,k));
    
}

long int f(long int a,long int b)
{
	long int z;
	long int i;
	long int chu=1;
	long int ok;
	do{ ok=1;
		z=chu*a+b;
		
		for (i=1;i<a;i++)
	    {  
	       if(z%(a-1)!=0) {ok=0;break;}
	       z=a*z/(a-1)+b;
	     }
	    
	    chu++;
	}while(ok==0);
	       	    
	return z;
}