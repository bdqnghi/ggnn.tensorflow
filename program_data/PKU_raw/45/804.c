int main()
{
	char a[50],b[50];
	int i,j,k=0,l=0;
	scanf("%s %s",a,b);
	for(i=0;i<strlen(a);i++){
		for(j=l;j<strlen(b);j++)
			if(a[i]==b[j]) {
				k++;
				l=j+1;
				break;}
	}
	if(k==strlen(a))
		printf("%d",j+1-k);
	return 0;
}