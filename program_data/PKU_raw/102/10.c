int main(){
    int n,mk=0,fk=0;
	scanf("%d",&n);
	int i,j;
	struct point{
		char sex[10];
		double height;
    }p[40],m[40],f[40],e;
	for(i=0;i<n;i++){
		scanf("%s%lf",p[i].sex,&p[i].height);
	}
    for(i=0;i<n;i++){
		if(strcmp(p[i].sex,"male")==0){
			m[mk]=p[i];
			mk++;
		}
        if(strcmp(p[i].sex,"female")==0){
			f[fk]=p[i];
			fk++;
		}
	}
	for(i=1;i<mk;i++){
		for(j=0;j<mk-i;j++){
			if(m[j].height>m[j+1].height){
				e=m[j];
				m[j]=m[j+1];
				m[j+1]=e;
			}
		}
	}
    for(i=1;i<fk;i++){
		for(j=0;j<fk-i;j++){
			if(f[j].height<f[j+1].height){
				e=f[j];
				f[j]=f[j+1];
				f[j+1]=e;
			}
		}
	}
	for(i=0;i<mk;i++){
		if(i==0){
			printf("%.2lf",m[i].height);
		}else{
            printf(" %.2lf",m[i].height);
		}
	}
	for(i=0;i<fk;i++){
            printf(" %.2lf",f[i].height);
	}
    return 0;
}