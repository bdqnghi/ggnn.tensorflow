main(){
	char s1[100],s2[100]={'\0'},c;
	int a[100]={0},b,k,i,len,l,num;
	gets(s1);
	len=strlen(s1);
	if(len==2&&(10*(s1[0]-'0')+s1[1]-'0')<13) printf("0\n%d",10*(s1[0]-'0')+s1[1]-'0');
	else if(len==1) printf("0\n%d",s1[0]-'0');
	else{
	k=s1[0]-'0';
	for(i=1;i<len;i++){
		b=10*k+s1[i]-'0';
		if(b>=13){
			k=b%13;
			a[i-1]=(b-k)/13;}
		else k=b;
	}
	if((10*(s1[0]-'0')+s1[1]-'0')>=13)
	{
	for(l=0;l<len-1;l++)s2[l]=a[l]+'0';}
	else {
	for(l=0;l<len-2;l++)s2[l]=a[l+1]+'0';}
	puts(s2);
	printf("%d",k);}
	} 