int main(){
	int n,q,i;

	double s,m,A;
	scanf("%d",&n);
    int f[n];
	double g[n];
	int x[n];
    s=0;
    m=0;
    q=0;
  
    for( i=0 ;  i < n ;  i++){
		scanf("%d", &(x[i]));
		q+=x[i];
}
 for( i=0 ;  i < n ;  i++){
		scanf("%d", &(f[i]));
	  if(f[i]>=90&&f[i]<=100){
           g[i]=4.0;
   }else if(f[i]>=85&&f[i]<=89){
         g[i]=3.7;
   }else if(f[i]>=82&&f[i]<=84){
         g[i]=3.3;
   }else if(f[i]>=78&&f[i]<=81){
         g[i]=3.0;
   }else if(f[i]>=75&&f[i]<=77){
         g[i]=2.7;
   }else if(f[i]>=72&&f[i]<=74){
         g[i]=2.3;
   } else if(f[i]>=68&&f[i]<=71){
         g[i]=2.0;
   } else if(f[i]>=64&&f[i]<=67){
         g[i]=1.5;
   } else if(f[i]>=60&&f[i]<=63){
         g[i]=1.0;
   } else{
          g[i]=0.0;
   }
      m=x[i]*g[i];

		s+=m;
	}
    A=s/q;
    printf("%.2lf",A);
	return 0;
}
