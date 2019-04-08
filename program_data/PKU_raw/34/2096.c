int main()
{   int ji(int x);
    int ou(int y);
	int n;
    scanf("%d",&n);
	while(1){
		if(n!=1){
			if(n%2==0){
				n=ou(n);
			}
			else{
				n=ji(n);
			}
		}
		else{
			printf("End");
			break;
		}
	}
	return 0;
}
int ji(int x)
{
	int z;
	z=x*3+1;
	printf("%d*3+1=%d\n",x,z);
	return(z);
}
int ou(int x)
{
	int z;
	z=x/2;
	printf("%d/2=%d\n",x,z);
	return(z);
}