
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2){
		int k,p;
		for(k=3;k<=i/2;k=k+2){
			p=i-k;
			int a,b,c,d;
			c=(int)sqrt(k+1);
			d=(int)sqrt(p+1);
            for(a=2;a<=c;a++){
				if(k%a==0)
					break;
			}
			for(b=2;b<=d;b++){
				if(p%b==0)
					break;
			}
			if(a>=c+1&&b>=d+1){
				printf("%d=%d+%d\n",i,k,p);
                                     break;
			}
		}
	}
		return 0;
}
