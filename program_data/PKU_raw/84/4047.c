
int main(int argc, char* argv[])
{
	int n,a;
	int i=0;
	int x=0;
	int y=0;
	scanf("%d",&n);
	do{
		scanf("%d",&a);
		if (a>x){
			y=x;
			x=a;
		}
		else if(a>y){
			y=a;
		}
		i++;
	}while(i<n);
	printf("%d\n%d\n",x,y);
	
	
	return 0;
}
	