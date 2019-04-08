int main(){
	int n,u,max=0;
	int a[505]={0};
	char s[505]={0};
	char c[505][5]={0};
	int i,j,x,k;
	
	scanf("%d\n",&n);
	gets(s);
	x=strlen(s);
	
	for(i=0;i<=x-n;i++){
		for(j=0;j<n;j++){
			c[i][j]=s[i+j];
			a[i]=1;
		}
	}
	
	for(i=0;i<=x-n+1;i++){	
		for(j=i+1;j<x-n+1;j++){		
			if((a[i]!=0)&&(a[j]!=0)){		
				u=strcmp(c[i],c[j]);
				if(u==0){
					a[i]++;
					a[j]=0;
					if(a[i]>max){
						max=a[i];
					}
				}
			}
		}
	}
	if(max<=1){
		printf("NO");
	}
	else{
	printf("%d\n",max);

	for(k=0;k<=x-n;k++){	
	
		if(a[k]==max){	
			puts(c[k]);
		}
	
	}
	}
	return 0;
}