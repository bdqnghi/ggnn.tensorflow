void main(){
	int a[350],b[350],c[351];
	char s1[300],s2[300];
	int i,j,k,u,N,s;


		scanf("%s%s",s1,s2);
		j=0;
		while(s1[j]!='\0'){
			a[j]=s1[j]-'0';
			j++;
		}
		k=0;
		while(s2[k]!='\0'){
			b[k]=s2[k]-'0';
			k++;
		}

		u=0;
		s=0;//s????
		while((j>0)&&(k>0)){
			c[u]=a[j-1]+b[k-1]+s;
			s=c[u]/10;
			c[u]=c[u]%10;
			j--;k--;u++;
		}
/*????while?????????j>k?a????????????????*/
		while(j>0){
			c[u]=a[j-1]+s;
			s=c[u]/10;
			c[u]=c[u]%10;
			j--;u++;
		}
		while(k>0){
			c[u]=b[k-1]+s;
			s=c[u]/10;
			c[u]=c[u]%10;
			k--;u++;
		}
		if(s==1){//????????
			c[u]=s;
			u++;
		}
while(u>1&&c[u-1]==0)
u--;
		while(u>0){
				printf("%d", c[u-1]);
			u--;
		}
		printf("\n");

}
