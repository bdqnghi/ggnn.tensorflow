int main(){
	int n,i,j,p,q;
	double t,a[100],b[100];
	struct student{
		char x[10];
		double h;
	}s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",(s[i].x),&(s[i].h));
	}
	p=0;
	q=0;
	for(i=0;i<n;i++){
		    if(s[i].x[0]=='m'){
			    a[p]=s[i].h;
				p++;
			}else{
				b[q]=s[i].h;
				q++;
			}

	}
    for(j=1;j<=p;j++){
		for(i=0;i<p-j;i++){
			if(a[i]>a[i+1]){
				t=a[i+1];
				a[i+1]=a[i];
                a[i]=t;
			}
		}
	}
    for(j=1;j<=q;j++){
		for(i=0;i<q-j;i++){
			if(b[i]<b[i+1]){
				t=b[i+1];
				b[i+1]=b[i];
                b[i]=t;
			}
		}
	}
	for(i=0;i<p;i++){
		printf("%.2lf ",a[i]);
	}
	for(i=0;i<q;i++){
		if(i!=q-1){
			printf("%.2lf ",b[i]);
		}
		if(i==q-1){
			printf("%.2lf",b[i]);
		}
	}
    return 0;
}
