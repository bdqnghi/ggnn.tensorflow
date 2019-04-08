int main(){
	double n;
	char zzd[600];
	char hzy[600];
	int i;
	int a;
	double v;
	a=0;
	double b;
	int c;
	c=0;
	scanf("%lf",&n);
	scanf("%s",zzd);
	scanf("%s",hzy);
	b=strlen(zzd);
	for(i=0;i<b;i++){
		if(zzd[i]!='A'&&zzd[i]!='G'&&zzd[i]!='C'&&zzd[i]!='T'){
			printf("error");
			c++;
			break;
		}
		else if(hzy[i]!='A'&&hzy[i]!='G'&&hzy[i]!='C'&&hzy[i]!='T'){
			printf("error");
			c++;
			break;
		}
		else if(zzd[i]==hzy[i]){
				a++;
			}
	}
	if(c==0){
	v=a/b;
	if(v>=n){
		printf("yes");
	}
	else if(v<n){
		printf("no");
	}
	}
	return 0;
}