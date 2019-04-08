int main(){
	int n,i,a=0,b=0,j;
	double h=0,m=0;
	double a1[40]={0},b1[40]={0};
	char p[40]="male";
	char q[40]="female";
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		char s[40];
		scanf("%s",s);
		scanf("%lf",&h);
		if(strcmp(s,p)==0){
			a1[a]=h;
			a++;
			
		}
		else if(strcmp(s,q)==0){
			b1[b]=h;
			b++;
		}
	}

	for(i=1;i<=a;i++){
		for(j=0;j<a-i;j++){
			if(a1[j]>a1[j+1]){
				m=a1[j];
				a1[j]=a1[j+1];
				a1[j+1]=m;
			}
		}
	}
	for(i=1;i<=b;i++){
		for(j=0;j<b-i;j++){
			if(b1[j]>b1[j+1]){
				m=b1[j];
				b1[j]=b1[j+1];
				b1[j+1]=m;
			}
		}
	}

	printf("%.2lf",a1[0]);
	for(i=1;i<a;i++){
		printf(" %.2lf",a1[i]);
	}

	for(i=b-1;i>=0;i--){
		printf(" %.2lf",b1[i]);
	}
	
	return 0;
}

