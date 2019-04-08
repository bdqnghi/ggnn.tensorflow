int rev(int a);
int main()
{
	int a,b,i;
	for(i=0;i<6;i++){
	scanf("%d",&a);
    b=rev(a);
	printf("%d\n",b);
		}
	return 0;
}
int rev(int a){
	int m,n=0,j;
	for(j=0;j<10;j++){
		m=a%10;
		a=a/10;
		n=n*10+m;
		if(a==0)
			break;
	}
	return n;
}
		
	