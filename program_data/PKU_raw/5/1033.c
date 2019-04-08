int main()
{
	int i,m,n;
	double x,y,o=0;
	char a[500],b[500];
	scanf("%lf",&x);
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n){
		printf("error");
	}else{
		for(i=0;i<m;i++){
			if((a[i]==65||a[i]==71||a[i]==67||a[i]==84)&&(b[i]==65||b[i]==71||b[i]==67||b[i]==84)){
				if(a[i]==b[i]){
					o++;
				}
			}else{
				printf("error");
				break;
			}
		}
		if(i==m){
			y=o/n;
			if(y>=x){
				printf("yes");
			}else{
				printf("no");
			}
		}
	}
	return 0;
}