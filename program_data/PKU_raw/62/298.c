int main(){
	char a[201],b[201];
	int i,n,m,k;
	k=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		b[k]=a[i];
		k++;
		if(a[i]==32){
			for(m=i+1;m<n;m++)
				if(a[m]==32){
                    i++;
				}
				else{
                    break;
    			}
		}
	}
	b[k]='\0';
	puts(b);
	return 0;
}
