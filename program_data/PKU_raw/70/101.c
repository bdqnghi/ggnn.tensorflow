


int main(){
   int n,i,a,b;
  double x[10],y[10],totle=0; 
   scanf("%d",&n);
	   for (i=0;i<n;i++){
		   scanf("%lf %lf",&x[i],&y[i]);
	   }
	   for(a=0;a<n;a++){
		   for(b=0;b<n;b++){
			   if ((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b])>totle)
				   totle=((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]));
		   }
	   }
    printf("%.4f\n",pow(totle,0.5));
	return 0;
}