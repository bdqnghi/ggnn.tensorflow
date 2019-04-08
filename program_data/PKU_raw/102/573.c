
int main(int argc, char* argv[])
{
	int n,i,r,j=0,k=0;
	char s[7];
	double a[100],b[100],h;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",s,&h);
		if(*s=='m'){
			a[j]=h;
			j++;
		}
		if(*s=='f'){
			b[k]=h;
			k++;
		}
	}
    for(r=j-1;r>0;r--){
		for(i=0;i<r;i++){
			if(a[i]>a[i+1]){
               h=a[i+1];
			   a[i+1]=a[i];
			   a[i]=h;
			}
		}
	}
    for(r=k-1;r>0;r--){
		for(i=0;i<r;i++){
			if(b[i]>b[i+1]){
               h=b[i+1];
			   b[i+1]=b[i];
			   b[i]=h;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%.2lf ",a[i]);
	}
	for(i=k-1;i>0;i--){
		printf("%.2lf ",b[i]);
	}
	printf("%.2lf",b[0]);

	return 0;
}


