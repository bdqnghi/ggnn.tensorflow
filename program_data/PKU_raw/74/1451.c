int main()
{
	int m,n,i,k=2,t=0,u,s=0,r=1,b=1,flag=1;
	
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		for(k;k<i;k++){
			if(i%k==0)
				t++;
		}
		if(t==0){
			r=i;
			while(r!=0){
				u=r%10;
				s=s*10+u;
				r=r/10;
			}
			if(s==i && b!=1){
				printf(",%d",i);
				flag=0;
			}
			if(s==i && b==1){
				printf("%d",i);
				b++;
				flag=0;
			}
		}
		k=2;
		t=0;
		s=0;
	}
	if(flag==1)
		printf("no");
	return 0;
}
