int main() {
         int a[999],b[999],c,i,m,n[999],j;
		 double s=0;
		 scanf("%d",&m);
		 for(i=0;i<m;i++){
			 scanf("%d",&n[i]);
		 }
		 a[0]=1;
		 b[0]=2;
         for(i=0;i<m;i++){
			 for(j=0;j<n[i];j++){
				 s+=1.0*b[j]/a[j];
                 c=b[j]+a[j];
				 b[j+1]=c;
				 a[j+1]=b[j];
		 }
         printf("%.3lf\n",s);
		 s=0;}
		 return 0;
		 }

		 