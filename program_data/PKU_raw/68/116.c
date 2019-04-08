int sushu(int x){
	int b,i=0;
	for(b=2;b<=sqrt(x);b++){
		if(x%b==0){
			i++;
			break;
		}
		else continue;
	}
	if(i==0)
    return 0;
	else return x;
}
int main(int argc, char* argv[])
{
int n,x,b,c;
scanf("%d\n",&n);
for(x=6;x<=n;x+=2){
	for(b=2;b<=x/2;b++){
			c=x-b;
		    if(sushu(b)==0&&sushu(c)==0){
				printf("%d=%d+%d\n",x,b,c);
				break;
			}
			else continue;
	}
}
	
	return 0;
}