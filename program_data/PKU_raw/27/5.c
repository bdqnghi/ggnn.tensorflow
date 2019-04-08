int main()
{
	double a[100],b[100],c[100],d[100],e[100],f[100];
	int n,i;
	double *aa,*bb,*cc,*dd,*ee,*ff;
	scanf("%d",&n);
	aa=a,bb=b,cc=c;
	for(i=0;i<n;aa++,bb++,cc++,i++)
	scanf("%lf %lf %lf",aa,bb,cc);
    aa=a,bb=b,cc=c,dd=d,ee=e,ff=f;
    for(i=0;i<n;aa++,bb++,cc++,dd++,ee++,ff++,i++)
	{
		
		(*dd)=(*bb)*(*bb)-4*(*aa)*(*cc);
        if((*dd)>0)
		{
			(*ee)=((-(*bb))+sqrt(*dd))/(2*(*aa));
			(*ff)=((-(*bb))-sqrt(*dd))/(2*(*aa));
			printf("x1=%.5lf;x2=%.5lf\n",*ee,*ff);
		}
		else if((*dd)==0)
		{
			(*ee)=0-(*bb)/(2*(*aa));
			printf("x1=x2=%.5lf\n",*ee);}

        else if((*dd)<0)
		{  (*ee)=((*bb)/(2*(*aa)));
		   (*ff)=(sqrt(0-(*dd)))/(2*(*aa));
		   printf("x1=-%.5lf+%.5lfi;x2=-%.5lf-%.5lfi\n",*ee,*ff,*ee,*ff);
		}
	}
}


