int main ()
{
 int n;
 scanf ("%d",&n);
 double a[100],b[100],c[100],x1[100],x2[100],m[100],w[100];
 int i;
 for (i=0;i<n;i++)
 {
	 scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
	 if ((b[i]*b[i]-4*a[i]*c[i])>=0)
	 {
	 x1[i]=(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
     x2[i]=(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
	{
     if (x1[i]!=x2[i]&&x1[i]!=0&&x2[i]!=0)
		 printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
    else if (x1[i]!=x2[i]&&x1[i]==0&&x2[i]!=0)
		 printf("x1=0.00000;x2=%.5lf\n",x2[i]);
    else if (x1[i]!=x2[i]&&x1[i]!=0&&x2[i]==0)
		 printf("x1=%.5lf;x2=0.00000\n",x1[i]);
	 else if (x1[i]==x2[i]&&x1[i]!=0)
		 printf ("x1=x2=%.5lf\n",x1[i]);
	 else if (x1[i]==x2[i]&&x1[i]==0)
		 printf("x1=x2=0.00000\n");
	};
	 }
		 if  ((b[i]*b[i]-4*a[i]*c[i])<0)
		 {
			 m[i]=-b[i]/(2*a[i]);
		     w[i]=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
		
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",m[i],w[i],m[i],w[i]);
			 }
 
 }
 return 0;
}
