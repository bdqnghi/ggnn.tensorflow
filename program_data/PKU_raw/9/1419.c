
int main()
{
	int n,i,t;
	int u=0,k=0;
	int a[N],b[N];
	char s[N][10],h[N][10],j[N][10];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s %d", &s[i],&a[i]);
		if(a[i]>=60){
			b[u]=a[i];
			strcpy(h[u],s[i]);
			u++;
		}
		else{
			strcpy(j[k],s[i]);
			k++;
		}
	}
	for(i=u-1;i>0;i--){
		for(t=0;t<i;t++){
			if(b[t]<b[t+1]){
				int f;
				f=b[t];
				b[t]=b[t+1];
				b[t+1]=f;
				char tmp[10];
				strcpy(tmp,h[t]);
				strcpy(h[t],h[t+1]);
				strcpy(h[t+1],tmp);
			}
		}
	}
	for(i=0;i<u;i++)
		printf("%s\n", h[i]);
	for(t=0;t<k;t++)
		printf("%s\n", j[t]);
	return 0;
}