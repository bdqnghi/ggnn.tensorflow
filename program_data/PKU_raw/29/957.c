
int main(int argc, char* argv[])
{
 int a[1000];
 double k[1000];
 int m,q,i,shumu;
 for(i=0;i<1000;i++){
	 if(i==0){
		 a[0]=1;	 
	 }
	 else{
		 if(i==1){
			 a[i]=2;
		 }
		 else{
			 a[i]=a[i-1]+a[i-2];
		 }
	 }
 }

 double zhi,sum=0;
 scanf("%d",&m);
 for(q=0;q<m;q++){
	 scanf("%d",&shumu);
	 for(i=0;i<shumu;i++){
		 zhi=1.0*a[i+1]/a[i];
		 sum+=zhi;
	}
	 k[q]=sum;
	 sum=0;
 }
 for(i=0;i<m;i++){
	 printf("%.3lf\n",k[i]);
 }

	return 0;
}



