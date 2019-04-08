int sushu(int n){
    int a,i;

    if (n <= 1) return(0);
    if (n == 2) return(1);
    if (n %2 == 0) return(0);

    a = sqrt( n )+1;
	for (i=3; i<=a; i+=2){
       if (n%i == 0) return(0);
    }
      return(1);
}
int main()
{
	int x,y,z;
	scanf("%d",&x);
	for(y=3;y<=x/2;y+=2){
			z=x-y;
			if(sushu(y)&&sushu(z))
				printf("%d %d\n",y,z);			
		}
	return 0;
}