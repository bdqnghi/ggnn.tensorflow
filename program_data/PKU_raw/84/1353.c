int main()
{
	 int n;
	 scanf("%d\n",&n);
     int a,i,sum,som;
     for(i=0;i<n;i++){
         scanf("%d\n",&a);
		 if(i==0){
			 sum=a;
			 som=0;
		 }else if(sum<a){
				som=sum;
                                     sum=a;
		 }else if(som<a){
				 sum=sum;
				 som=a;
		 }else if(som>a){
				 sum=sum;
				 som=som;
		 }
	 }
		 printf("%d\n%d\n",sum,som);
		 return 0;
}
		 
