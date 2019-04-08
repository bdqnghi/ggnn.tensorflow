
int main(int argc, char* argv[])
{
   double n,i,k=1;
   scanf("%lf",&n);
   if(n==0){
	   printf("1");
   }else{
	   for(i=0;i<n;i++){
           k=2*k;
	   }
       printf("%.0lf",k);
   }
	return 0;
}
