int main(){
	char a[200],b[200];
	int i,j,c[200],k;
	for(i=0;i<200;i++)
		c[i]=1;
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b))
		printf("NO");
	else{
		for(i=0;i<strlen(a);i++)
			for(j=0;j<strlen(b);j++)
				if(a[i]==b[j]&&c[j]!=0){
					c[j]=0;
					break;
				}
		k=0;
		for(i=0;i<strlen(a);i++)
			if(c[i]==1)
				k=1;
		if(k==1)
			printf("NO");
		else
			printf("YES");
	}
	return 0;
}