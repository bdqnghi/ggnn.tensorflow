int prime(int x);
int main()
{
	int n;
	scanf("%d",&n);
	int a;                                                           
	for(a=6;a<=n;a=a+2)
	{
		int p,q,sp,sq;
	    for(p=3,sp=0,sq=0;p<=a/2;p=p+2)       
		{
		    q=a-p;
			sp=prime(p);
			sq=prime(q);
			if(sp*sq==1)
			{
				printf("%d=%d+%d\n",a,p,q);
			    break;
			}
			
		}
	
	}
	return 0;
}

int prime(int x)
{
	int j,sx=0;
	if(x==3||x==5||x==7)
		sx=1;
	for(j=3;j*j<x;j=j+2)
	{
	    if(x%j==0)break;
	    if((j+2)*(j+2)>x)
		{
		  sx=1;  
		}
	}
	return sx;    
}







