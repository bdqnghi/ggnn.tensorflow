
int main()
{
	int n,i,j,x,z,s[10000];
	scanf("%d",&n);
	z=1;
	s[0]=2;
	x=0;
	if(n>=5){for(i=3;i<=n;i++){
		x=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				x+=1;
			}else if(i%j!=0){
				x+=0;
			}
		}
		if(x==0){
			s[z]=i;
			z++;
		}
	}

	for(i=0;i<z-1;i++){
		if(s[i]+2==s[i+1]){
			printf("%d %d\n",s[i],s[i+1]);
		}
	}}else if(n<5){printf("empty");}
	return 0;
}