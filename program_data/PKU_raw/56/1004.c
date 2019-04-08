int main()
{   
	int n;
	scanf("%d",&n);
	for(int i=10;i<10*10*10*10*10*10;i*=10){
       int a;
	   a=n%i/(i/10);
	   if (a!=0){
		   printf("%d",a);
	   }else{
		   return 0;
	
		}
	}


	
	return 0;
}