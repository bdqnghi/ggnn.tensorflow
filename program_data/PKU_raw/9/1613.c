int main (){
	int a[100],e[100],f[100];
	char c[100][100],b[100][100],d[100][100],x[100];
	int n,p=0,q=0,k,z,i;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s%d",c[i],&a[i]);
		if(a[i]>=60){
			p++;
			e[i-q]=a[i];
			strcpy(b[i-q],c[i]);
		}
		if(a[i]<60){
			q++;
			f[i-p]=a[i];
			strcpy(d[i-p],c[i]);
		}
	}

for (k=1;k<=p;k++){
		for (i=0;i<p-k;i++){
			if(e[i]<e[i+1]){
				z=e[i];
				e[i]=e[i+1];
				e[i+1]=z;
			strcpy(	x,b[i]);
			strcpy(	b[i],b[i+1]);
			strcpy(	b[i+1],x);
			}

		}
	}
for(i=0;i<p;i++){
	puts(b[i]);
}
for(i=0;i<q;i++){
	puts(d[i]);
}

	return 0;
}

