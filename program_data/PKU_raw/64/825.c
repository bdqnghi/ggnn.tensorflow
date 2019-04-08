int main(){
   int n;
   scanf("%d",&n);
   int *x=(int*)malloc(sizeof(int)*n);
   int *y=(int*)malloc(sizeof(int)*n);
   int *z=(int*)malloc(sizeof(int)*n);
   int i,j;
   for(i=0;i<n;i++){
      scanf("%d%d%d",&x[i],&y[i],&z[i]);
   }
   double *d=(double*)malloc(sizeof(double)*((n-1)*n/2));
   int *number1=(int*)malloc(sizeof(int)*((n-1)*n/2));
   int *number2=(int*)malloc(sizeof(int)*((n-1)*n/2));
   int pos=0; //number1?number2??????? (n-1)*n/2
   for(i=0;i<n-1;i++){	
      for(j=i+1;j<n;j++){         
		 //d[i]=sqrt((x[i]-x[j])^2+(y[i]-y[j])^2+(z[i]-z[j])^2); //~????????
		 d[pos]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)+pow(z[i]-z[j],2));
         number1[pos]=i;
         number2[pos]=j;
		 pos++;
	  }
   }
   int k,f,g;
   double e;
   for(k=1;k<=(n-1)*n/2;k++){
      for(i=0;i<(n-1)*n/2-k;i++){
         if(d[i]<d[i+1]){
		    e=d[i];
            d[i]=d[i+1];
            d[i+1]=e;
            f=number1[i];
            number1[i]=number1[i+1];
            number1[i+1]=f;
            g=number2[i];
            number2[i]=number2[i+1];
            number2[i+1]=g;    
		 }
	  }

   }
   for(k=0;k<(n-1)*n/2;k++){
      printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[number1[k]],y[number1[k]],z[number1[k]],x[number2[k]],y[number2[k]],z[number2[k]],d[k]);
   }
   free(x);
   free(y);
   free(z);
   free(number1);
   free(number2);
   return 0;
}
