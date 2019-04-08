
int main(int argc, char* argv[])
{

    int n,x,y;
    scanf("%d",&n);

    while(n!=1){
	if(n%2==0){
		n=n/2;
		x=n*2;
		printf("%d/2=%d\n",x,n);
	}
	else{
		n=n*3+1;
		y=(n-1)/3;
		printf("%d*3+1=%d\n",y,n);
	}
    }

    if(n==1)
    printf("End\n");

    return 0;
}
