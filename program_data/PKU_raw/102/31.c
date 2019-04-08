int main()
{
	int n,i,j=0,k=0,l,p,q;
	double h,m[40],f[40],x,y;
	char sex[10],a[10]="male",b[10]="female";
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sex);
		scanf("%lf",&h);
		if(strcmp(sex,a)==0){
			m[j]=h;
			j++;
		}
		if(strcmp(sex,b)==0){
			f[k]=h;
			k++;
		}
	}
	p=j;
	q=k;
	for(l=0;l<p-1;l++){
		for(j=0;j<p-1-l;j++){
			if(m[j]>m[j+1]){
				x=m[j];
			    m[j]=m[j+1];
			    m[j+1]=x;
			}
		}
	}
	for(l=0;l<q-1;l++){
		for(k=0;k<q-1;k++){
			if(f[k]>f[k+1]){
				y=f[k];
				f[k]=f[k+1];
				f[k+1]=y;
			}
		}
	}
	for(j=0;j<p;j++){
		if(j==0)
			printf("%.2lf",m[0]);
		else printf(" %.2lf",m[j]);
	}
	for(k=q-1;k>=0;k--)
		printf(" %.2lf",f[k]);
	return 0;
}



		

