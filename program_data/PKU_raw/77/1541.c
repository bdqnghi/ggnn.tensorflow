int main()
{
	int a[100]={0},b[2][50],i,j,k,l=0,len;
	char str[101]={'\0'},c,d;
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
		a[i]=i;
	c=str[0];
	for(i=0;i<len;i++)
		if(str[i]!=c){
			d=str[i];
			break;
		}
	for(i=0;i<len/2;i++){
		for(j=0;j<len-i*2;j++){
			if(str[j]==c&&str[j+1]==d){
				b[0][i]=a[j];
				b[1][i]=a[j+1];
				for(k=j;k<len-2*i-2;k++){
					a[k]=a[k+2];
				    str[k]=str[k+2];
				}
				str[len-2*i-2]='\0';
				break;
			}
		}
	}
	for(i=0;i<len/2;i++)
	    printf("%d %d\n",b[0][i],b[1][i]);
	return 0;
}