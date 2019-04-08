
main(){
	char str[10000], m[10000];
	long a, b, i, j, n[10000], sum=0;
	scanf("%d %s %d", &a, str, &b);
	for(i=0; i<strlen(str); i++){
		if(str[i]<='z' && str[i]>='a') str[i]-=32;
		else str[i]+=0;
	}
	for(i=0; i<strlen(str); i++){
		if('0'<=str[i] && str[i]<='9') str[i]-=48;
		else str[i]-=55;
		n[i]=str[i];
	}
	for(i=0; i<strlen(str); i++) sum+=n[i]*pow(a, strlen(str)-i-1);
	for(i=0; ;i++){
		n[i]=sum%b;
		sum/=b;
		if(sum==0) break;
		else continue;
	}
	for(j=0; j<=i; j++){
		if(n[j]<10) m[j]=n[j]+48;
		else m[j]=n[j]+55;
	}
	for(j=i; j>=0; j--) printf("%c", m[j]);
}