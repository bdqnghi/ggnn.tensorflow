


int main(){
	int i,j,k,n,m,sum=0;
	char a[1000][40]={0},*p;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%s",a[i]);
	}
         sum+=strlen(a[0]);
         printf("%s",a[0]);
	for(p=a[0]+40;p<a[0]+n*40;p+=40){
		if(strlen(p)+sum+1>80){
		   printf("\n%s",p);
                     sum =strlen(p);
                     continue;
		}
		printf(" %s",p);
                  sum+=strlen(p);
                  sum++;
	}
         printf("%s",p+40);
}

