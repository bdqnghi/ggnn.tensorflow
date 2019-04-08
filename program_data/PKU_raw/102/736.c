
int main(int argc, char* argv[])
{
	int n,i,j,mp=0,fp=0;
	double male[40],female[40],h,tmp;
	scanf("%d",&n);
	char s[10];
	for(i=0;i<n;i++){
		scanf("%s",&s);
		scanf("%lf",&h);
		if(s[0]=='f'){
			female[fp]=h;
			fp++;
		}else{
			male[mp]=h;
			mp++;
		}
	}
	for(i=0;i<mp;i++){
		for(j=0;j<mp-1;j++){
			if(male[j]>male[j+1]){
				tmp=male[j];
				male[j]=male[j+1];
				male[j+1]=tmp;
			}
		}
	}
	for(i=0;i<fp;i++){
		for(j=0;j<fp-1;j++){
			if(female[j]<female[j+1]){
				tmp=female[j];
				female[j]=female[j+1];
				female[j+1]=tmp;
			}
		}
	}
	for(i=0;i<mp;i++){
		printf("%.2lf ",male[i]);
	}
	for(i=0;i<fp;i++){
		printf("%.2lf",female[i]);
		if(i!=fp-1){
			printf(" ");
		}
	}
	
	return 0;
}

