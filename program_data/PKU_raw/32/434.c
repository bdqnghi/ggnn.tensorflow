void main(){
	char s1[100],s2[100],s[100];
	int a[100],b[100],c[100];
	int i,j,k,n,u,v,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s1);
		scanf("%s",s2);
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
		m=0;
		
		while(k>0){
			c[u]=a[j-1]-b[k-1]-m;
			
			if(c[u]<0)
				m=1;
			else
				m=0;
			c[u]=c[u]+10*m;
			j--;k--;u++;

		}		
		while(m==1 || j>0){//
			c[u]=a[j-1]-m;
			if(c[u]<0)
				m=1;
			else
				m=0;
			c[u]=c[u]+10*m;
			j--;u++;
		}//
		
		for(v=0;v<u;v++){
			s[v]=c[v]+'0';
		}
		while(s[u-1]=='0'){
			u--;
		}
		while(u>0){
			printf("%c",s[u-1]);		
			u--;
		}		
		printf("\n");
	}
}



			
	