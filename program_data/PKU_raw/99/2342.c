int main(){
   int n,sz[100],i;
   double s1=0,s2=0,s3=0,s4=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
     scanf("%d",&sz[i]);
	 if(sz[i]<=18){
	   s1++;
	 }
	 if(sz[i]>18&&sz[i]<=35){
	   s2++;
	 }
	 if(sz[i]>35&&sz[i]<=60){
	   s3++;
	 }
	 if(sz[i]>60){
	   s4++;
	 }
   }
       s1=1.0*100*s1/n;
	   s2=1.0*100*s2/n;
	   s3=1.0*100*s3/n;
       s4=1.0*100*s4/n;
  printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",s1,s2,s3,s4);
return 0;
}
