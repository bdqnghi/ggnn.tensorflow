void main()
{
	int x,j=0,i=0,k=0,p,n[305]={0};
	char str[10000];
	gets(str);
	for(i=0;;i++){
		if(str[i]==','||str[i]=='\0'){
			for(p=j;p<i;p++){
				x=pow(10,i-p-1);
				n[k]=n[k]+(str[p]-48)*x;
			}
			j=i+1;
			p=k+1;
			k++;
		}
		if(str[i]=='\0') break;
		else continue;
	}
	for(i=0,j=0;i<p;i++)
		if(j<n[i]) j=n[i];
	for(i=0;i<p;i++)
		if(n[i]==j) n[i]=0;
	for(i=0,k=0;i<p;i++)
		if(k<n[i]) k=n[i];{
			if(k==0) printf("No");
			else printf("%d",k);
		}
}