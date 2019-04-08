
int main(int argc, char* argv[])
{
	int reverse(int num);
	int i,num;
	for(i=0;i<6;i++){
		scanf("%d",&num);
		printf("%d\n",reverse(num));
	}
}
int reverse(int num)
{
	int a,b,r,j;
	if(num>=0){
		b=num;
		r=0;
		for(j=0;j<32;j++){
			a=b%10;
			b=b/10;
			r=r*10+a;
			if(b==0)
				break;
		}
	}
	else{
		b=-num;
		r=0;
		for(j=0;j<32;j++){
			a=b%10;
			b=b/10;
			r=r*10+a;
			if(b==0)
				break;
		}
		r=-r;
	}
	return r;
}