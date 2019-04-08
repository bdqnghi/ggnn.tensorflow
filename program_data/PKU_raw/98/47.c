int main(){
	char a[300][40];
	int b[300],c=0;
	int n;
	scanf("%d",&n);
	int i,j,r,k;
	int p=0;
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0;i<n;i++){
		c=c+b[i]+1;
		if(c==81){
			for(j=p;j<i;j++){
				printf("%s ",a[j]);
			}
			printf("%s\n",a[i]);
			c=0;
			p=i+1;
		}
		else if(c>=82){
			for(j=p;j<i-1;j++){
				printf("%s ",a[j]);
			}
			printf("%s\n",a[i-1]);
			c=b[i]+1;
			p=i;
		}
		else if(c<81){
			int d=0;
			for(k=p;k<n;k++){
				d=d+b[k]+1;
			}
			if(d<=80){
			for(r=p;r<n-1;r++){
				printf("%s ",a[r]);
			}
			printf("%s",a[n-1]);
break;
			}
		}
	}
}