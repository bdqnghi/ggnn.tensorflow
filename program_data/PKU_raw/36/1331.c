int main(){
	int i,j,x,y,e,c;
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	x=strlen(a);
	y=strlen(b);
	if(x!=y) printf("NO");
	else{
		for(i=0;i<x;i++){
			for(j=0;j<x;j++){
				if(a[i]==b[j]){
					e=b[i];
					b[i]=b[j];
					b[j]=e;
				}
			}
		}
		c=strcmp(a,b);
		if(c==0)
			printf("YES");
		else
			printf("NO");
	}
	 return 0;
}
