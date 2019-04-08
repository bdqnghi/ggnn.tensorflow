int main()
{
    int a[6],n,i;
	while(a[0]!=0){
		 for(i=0;i<6;i++){
	     scanf("%d",&a[i]);
		 }
		 if(a[0]!=0){
	     n=3600-a[1]*60-a[2]+(a[3]+12-a[0]-1)*3600+a[4]*60+a[5];
	     printf("%d\n",n);
		 }
		 else
			 return 0;
	}
  	return 0;
}
