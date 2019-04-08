int main(){ 
	float a[41],b[41],f;
	int n,i,l,t,j=0,k=0;
	char s[8];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%f",s,&f);
		if(s[0]=='m'){
			a[j]=f;
			j++;
		}
		else{
			b[k]=f;
			k++;
		}
	}
	for(i=0;i<j;i++){
		t=i;
		for(l=i;l<j;l++){
			if(a[t]>a[l])
				t=l;
		}
		f=a[t];
		a[t]=a[i];
		a[i]=f;
	}
	for(i=0;i<k;i++){
		t=i;
		for(l=i;l<k;l++){
			if(b[t]<b[l])
				t=l;
		}
		f=b[t];
		b[t]=b[i];
		b[i]=f;
	}
	for(i=0;i<j;i++)
		printf("%.2f ",a[i]);
	for(i=0;i<k-1;i++)
		printf("%.2f ",b[i]);
	printf("%.2f\n",b[i]);
	return 0; 
}
