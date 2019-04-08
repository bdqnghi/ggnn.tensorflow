int main()
{
	int a[5][5],n,m,o,i,k,t;
	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			scanf("%d ",&a[i][k]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n<0||n>4||m<0||m>4){
		o=0;
	}
	else{
		o=1;
	}
	if(o==1){
		for(i=0;i<5;i++){
			t=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=t;
		}
		for(i=0;i<5;i++){
				printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
			}
		}
	else if(o==0){
		printf("error");
	}
	return 0;
}