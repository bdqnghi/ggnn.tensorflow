
int main()
{
	double a,b,c,w,x1,x2;
	int n,i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	
		scanf("%lf%lf%lf",&a,&b,&c);
	    w=b*b-4*a*c;
		if (w>0)
		{
			w=sqrt(w);
		    x1=(0-b+w)/(2*a);
		    x2=(0-b-w)/(2*a);
		    printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
		else if(w<0)
		{
			w=sqrt(0-w)/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(-b)/(2*a),w,(-b)/(2*a),w);
		}
		else if(w==0)
		{
			x1=x2=(0-b)/(2*a);
			printf("x1=x2=%.5f\n",x1);
		}
	}


	return 0;
}
