int main()
{
    int n,i,j,a[100],m,b[100];

    scanf("%d",&n);

    for(i=1;i<=n;i++){

       scanf("%d",&m);

       for(j=0;j<m;j++){
          scanf("%d",&a[j]);
          
	   }

       for(j=m-1;j<m;j--){
           if((60-a[j]-3*j)>0){
				break;
		   }
	   }

       if((60-a[j]-3*j)<4){
          b[i-1]=a[j];
	   }
       else{
		  b[i-1]=57-3*j;
	   
          }

	}
	   for(i=1;i<=n;i++){
		   printf("%d\n",b[i-1]);
       }
      return  0;
}
