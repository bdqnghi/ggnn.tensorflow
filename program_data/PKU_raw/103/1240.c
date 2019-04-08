int main(){
	int i=0,j=0,k=0,l,f[1002]={0},g;
	char s[1002],a[1002];
	gets(s);
	l=strlen(s);
	if(l==1){
		if(s[0]>=65&&s[0]<=90)
			printf("(%c,%d)",s[0],1);
		else
			printf("(%c,%d)",s[0]-32,1);
	}
	else{
		for(i=1;i<=l;i++){
		k=i-1;
		f[k]=1;
		for(;i<l;i++){
			if(s[i]==s[k]||abs(s[i]-s[k])==32)
				f[k]++;
			else
				break;
		}
		if(s[k]>=65&&s[k]<=90)
			printf("(%c,%d)",s[k],f[k]);
		else
			printf("(%c,%d)",s[k]-32,f[k]);
	}
	}
	return 0;
}

