int main()
{
	char a[100],b[100];
	int i,j=0,k=0,m;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++){
		k++;
	}
	for(i=0;b[i]!='\0';i++){
		j++;
	}
	if(k>j){m=k;}
	else{m=j;}
	for(i=0;i<m;i++){
		if(a[i]!=b[i]&&a[i]!=(b[i]+32)&&a[i]!=(b[i]-32)){
			if(a[i]>96){
				a[i]=a[i]-32;
			}
			if(b[i]>96){
				b[i]=b[i]-32;
			}
			if(a[i]>b[i]){
				printf(">\n");
			}
			else {
				printf("<\n");
			}
			break;
		}
		else if(i==m-1){
			printf("=\n");
		}
	}
	return 0;
}