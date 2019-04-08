int main(){
	char a[200],b[100],c[100],d[200];
	int i,j,na=0,nb=0,nc=0,m=0,l=0,x=0;
	gets(a);
	gets(b);
	gets(c);
	for (i=0;a[i]!='\0';i++){
		na++;
	}
	for (i=0;b[i]!='\0';i++){
		nb++;
	}
	for (i=0;c[i]!='\0';i++){
		nc++;
	}	
	for (i=0;i<=na+x*(nc-nb)-1;i++){
		if (a[i]==b[0]){
			l=1;
			for (j=1;j<=nb-1;j++){
				if (a[i+j]!=b[j])
					break;
				else l=l+1;
			}
			if (((l==nb)&&(a[i-1]==' ')&&(a[i+nb]==' '))||((i==0)&&(l==nb)&&(a[i+nb]==' '))||((l==nb)&&(i>=na+x*(nc-nb)-nb-1)&&(a[i-1]==' '))){
				for (m=i+nb;m<=na+2;m++){
					d[m-i-nb]=a[m];
				}
				for (m=i;m<=i+nc-1;m++){
					a[m]=c[m-i];
				}
				for (m=i+nc;m<=na+nc-nb+2;m++){
					a[m]=d[m-i-nc];
				}
				i=i+nc-nb;
				x=x+1;
			}
		}
	}
	a[na+x*(nc-nb)]='\0';
	printf("%s",a);
	return 0;
}
					
