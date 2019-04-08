int a(float b){
	int i;
	int c=1;
	int d;
	d=sqrt(b);
	if(b==3.0||b==5.0||b==7.0){
		return 1;
	}
	else{
		for(i=3;i<=d;i+=2){
			if((int)(b)%i==0){
				c=0;
				return 0;
				break;
			}
		}
	}
	return c;
}
int main()
{
	int n,k,l;
	scanf("%d",&n);
	for(l=6;l<=n;l+=2){
		for(k=3;k<=(n/2);k+=2){
			if(a(k)+a(l-k)==2){
				printf("%d=%d+%d\n",l,k,l-k);
				break;
			}
		}
	}
	return 0;
}

