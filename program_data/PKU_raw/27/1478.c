void main()
{
 int j,n;
 scanf("%d",&n);
 
 double a[100],b[100],c[100],deta[100],x1[100],x2[100],real[100],inmag[100];
 for(j=0;j<=n-1;j++)
 {
  scanf("%lf%lf%lf",&a[j],&b[j],&c[j]);
 
 deta[j]=b[j]*b[j]-4*a[j]*c[j];
 }
 
 for(j=0;j<=n-1;j++)
 {
  if(fabs(deta[j])<1e-6)
  {if(b[j]!=0)
	  printf("x1=x2=%.5lf\n",-b[j]/(2*a[j]));
  else printf("x1=x2=%.5lf\n",b[j]/(2*a[j]));  
  }
  else{
	if((deta[j])>1e-6)  
   {if(b[j]!=0)
	{	x1[j]=(-b[j]+sqrt(deta[j]))/(2*a[j]);
    x2[j]=(-b[j]-sqrt(deta[j]))/(2*a[j]);
    printf("x1=%.5lf;x2=%.5lf\n",x1[j],x2[j]);}
    else {x1[j]=(b[j]+sqrt(deta[j]))/(2*a[j]);
    x2[j]=(b[j]-sqrt(deta[j]))/(2*a[j]);
    printf("x1=%.5lf;x2=%.5lf\n",x1[j],x2[j]);
	}}
    else
    {if(b[j]!=0)
	{real[j]=-b[j]/(2*a[j]);
                inmag[j]=sqrt(-deta[j])/(2*a[j]);
    printf("x1=%.5lf+%.5lfi;",real[j],inmag[j]);
    printf("x2=%.5lf-%.5lfi\n",real[j],inmag[j]);}
    
	else{	real[j]=b[j]/(2*a[j]);
                inmag[j]=sqrt(-deta[j])/(2*a[j]);
    printf("x1=%.5lf+%.5lfi;",real[j],inmag[j]);
    printf("x2=%.5lf-%.5lfi\n",real[j],inmag[j]);}
	}
	
    }
  
 }
}