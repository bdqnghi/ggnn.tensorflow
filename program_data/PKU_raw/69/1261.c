int main()
{
	char s[251];
	int a[251]={0},b[251]={0},c[252]={0},alen,blen,clen,m;
	int i,k=0;
	gets(s);
	alen=strlen(s);
	for(i=alen-1;i>=0;i--){
		a[alen-i]=s[i]-'0';
	}
	gets(s);
	blen=strlen(s);
	for(i=blen-1;i>=0;i--){
		b[blen-i]=s[i]-'0';
	}
	if(alen>blen){
		clen=alen;
	}else{
		clen=blen;
	}
	for(i=1;i<=clen;i++){
		c[i]=a[i]+b[i];
	}
	for(i=1;i<=clen;i++){
		if(c[i]>9){
			c[i+1]++;
			c[i]=c[i]-10;
			if(i==clen){
				clen++;
			}
		}
	}
	if(clen==1){
		printf("%d",c[clen]);
	}else{
		for(i=clen;i>0;i--){
			if(c[i]!=0){
				m=i;
				break;
			}
		}
	}
	for(i=m;i>0;i--){
		printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}