int main(){

int i,n,m,k,p,q,z=0;
char a[260],b[260],c[260],d[260];

scanf("%s%s%s",a,b,c);
n=strlen(a);
m=strlen(b);
q=strlen(c);
for(i=0;i<n;i++){
	if(a[i]==b[0]){
		for(k=0;k<m;k++){
		d[k]=a[k+i];
		}
		d[k]='\0';
		if(strcmp(b,d)==0){
			for(p=0;p<i;p++){
			printf("%c" ,a[p]);
		
			}
				printf("%s" ,c);
			for(p=i+q;p<(n-m+q);p++){
			printf("%c",a[p]);
			}
             z=1;
			break;
		}
	}
}

if(z==0){
printf("%s" ,a);
}




return 0;
}

