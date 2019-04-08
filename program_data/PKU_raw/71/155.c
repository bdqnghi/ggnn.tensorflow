int main()
{
	int sz[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,a,b,c,i,j,t,day=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(b>c){
			t=b;
			b=c;
			c=t;
		}
		if((a%4==0&&a%100!=0)||a%400==0){
			if(b>2){
				for(j=b-1;j<c-1;j++){
					day+=sz[j];
				}
			}
				if(c<3){
					day=31;
				}
				if(b<3&&c>2){
					for(j=b-1;j<c-1;j++){
					day+=sz[j];
				}
					day+=1;
				}
			}
		else{
              for(j=b-1;j<c-1;j++){
					day+=sz[j];
				}
		}
		if(day%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		day=0;
	}
	return 0;
}

