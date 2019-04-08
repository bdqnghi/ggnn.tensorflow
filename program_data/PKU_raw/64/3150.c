double sqrt(double x);
int main(){
   int n;
   int sz[10][3];
   int f=0;
   double jl[100];
   int zbx[100],zby[100];
   scanf("%d",&n);
   for(int s=0;s<n;s++){
	   for(int c=0;c<3;c++){
	       scanf("%d",&sz[s][c]);
	   }
   
   }
   for(int r=0;r<n;r++){
	   for(int t=r+1;t<n;t++){
	       jl[f]=sqrt(((sz[r][0]-sz[t][0])*(sz[r][0]-sz[t][0]))+((sz[r][1]-sz[t][1])*(sz[r][1]-sz[t][1]))+((sz[r][2]-sz[t][2])*(sz[r][2]-sz[t][2])));
		   zbx[f]=r;
		   zby[f]=t;
	       f++;
	   }
   
   }
   for(int k=1;k<=f;k++){
      int b,p;
	  double e;
	  for(int m=0;m<f-k;m++){
		  if(jl[m]<jl[m+1]){
		     e=jl[m];b=zbx[m];p=zby[m];
			 jl[m]=jl[m+1];zbx[m]=zbx[m+1];zby[m]=zby[m+1];
			 jl[m+1]=e;zbx[m+1]=b;zby[m+1]=p;
		  
		  }
	  
	  }
   
   }
   for(int q=0;q<f;q++){
	   printf("(");
	   for(int l=0;l<2;l++){
	       printf("%d,",sz[zbx[q]][l]);
	   }
       printf("%d)",sz[zbx[q]][2]);
	   printf("-(");
	   for(int h=0;h<2;h++){
	       printf("%d,",sz[zby[q]][h]);
	   }
	    printf("%d)=",sz[zby[q]][2]);
		printf("%.2lf\n",jl[q]);


   
   
   }
   return 0;

}