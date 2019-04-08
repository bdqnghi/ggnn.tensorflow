int main(){
	int n,a,b,c=0,d=0;
	
	int i;
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			c++;
	    else if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2))
			d++;
		else if(a=b) {
			c++;
		    d++;
	}
	}
	if(c>d)
		printf("A");
	else if(c<d)
		printf("B");
	else if(c=d)
		printf("Tie");
	return 0;
}
		