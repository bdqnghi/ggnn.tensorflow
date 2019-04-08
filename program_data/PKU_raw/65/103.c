int main()
{
	int n,a,b,i,c,d;
	c=0;
	d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==0&&b==1){
			c=c+1;
		}else if(a==0&&b==2){
			d=d+1;
		}else if(a==1&&b==0){
			d=d+1;
		}else if(a==1&&b==2){
			c=c+1;
		}else if(a==2&&b==0){
			c=c+1;
		}else if(a==2&&b==1){
			d=d+1;
		}else{
			c=c;
			d=d;
		}
	}
	if(c>d){
		printf("A");
	}else if(c<d){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}
