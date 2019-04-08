int main()
{
	int m,n,i,j,a[100]={0},q=0,b,c,d;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		b=i;
		c=0;
		while(b>0)
		{
			d=b%10;
			c=c*10+d;
			b=b/10;
		}
		if(c==i){
			for(j=2;j<i;j++){
				if(i%j==0)
					break;
			}
			if(j==i){
				a[q]=i;
				q++;
			}
		}
	}
	if(a[0]==0)
		printf("no");
	else{
		printf("%d",a[0]);
			for(i=1;i<q;i++){
				printf(",%d",a[i]);
		}
	}
	return 0;
}

