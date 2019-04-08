
int main(int argc, char* argv[])

{
	char a[252],b[252],c[253];
	c[0]=48;
	scanf("%s%s",a,b);
	int la,lb,t,r,s;
    la=strlen(a);
	lb=strlen(b);
	if(la>lb){
		for(r=lb-1;r>=0;r--){
			b[r+la-lb]=b[r];
		}
		for(s=0;s<=la-lb-1;s++){
			b[s]=48;
		}
		t=la;
	}
    if(la<lb){
		for(r=la-1;r>=0;r--){
			a[r+lb-la]=a[r];
		}
		for(s=0;s<=lb-la-1;s++){
			a[s]=48;
		}
		t=lb;
	}
	if(la==lb){
		t=la;
	}
	int i,j,k=0;
	for(i=0;i<=t-1;i++){
		c[i+1]=a[i]+b[i]-48;
	}
	for(i=t;i>=1;i--){
		if (c[i]>=58){
			c[i]=c[i]-10;
			c[i-1]=c[i-1]+1;
		}
	}
	for (j=0;j<=t;j++){
		if(c[j]!=48){
			break;
		}
		k++;
	}
	if(k==t+1){
		printf("0");
	}
	else{
		for(j=k;j<=t;j++){
			printf("%c",c[j]);
		}
	}
	return 0;
}
