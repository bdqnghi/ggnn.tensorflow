char b[505];
int check(){
	int i,len,j;
	len=strlen(b);
	for(i=0,j=len-1;i<j;i++,j--)
		if(b[i]!=b[j])return 0;
		return 1;
}
void main()
{
	char a[510];
	int i,j,k,len;
	gets(a);
	len=strlen(a);
	for(i=2;i<=len;i++){
		for(j=0;j<=len-i;j++){
			for(k=0;k<i;k++){
				b[k]=a[k+j];
			}
			b[k]=0;
			if(check())printf("%s\n",b);
		}
	}
}
