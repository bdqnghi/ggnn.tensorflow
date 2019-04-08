main (){
  int n,i;
  double delta,p,q,x1,x2;
  float a[100],b[100],c[100];
     scanf("%d",&n);
        for (i=0;i<n;i++)
		{
			scanf("%f%f%f",&a[i],&b[i],&c[i]);
             delta=b[i]*b[i]-4*a[i]*c[i];
               p=-(b[i]/(2*a[i]));
			   q=sqrt(fabs(delta))/(2*a[i]);
   	        if(delta==0)
			{
		       printf("x1=x2=%.5f\n",p);}
	          else if(delta>0)
			  {
		        x1=p+q;
		        x2=p-q;
		         printf("x1=%.5f;x2=%.5f\n",x1,x2);}
	         else
			 {
	             printf("x1=%.5f+%.5fi;",p,q);
				 printf("x2=%.5f-%.5fi\n",p,q);
			 }
		}
return 0;
}
