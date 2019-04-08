char a[1000],b[1000];
int main(){	
	int len,n=0,i,j=0;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]==' '&&a[i+1]!=' '&&a[i-1]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]==' '&&a[i+1]==' '&&a[i-1]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]==' '&&a[i+1]!=' '&&a[i-1]==' '){
		}
		else if(a[i]==' '&&a[i+1]==' '&&a[i-1]==' '){
		}
    }
	printf("%s",b);

}
	