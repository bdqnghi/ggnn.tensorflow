int main(){
    int n,p=0,q=0,a[200],b[200],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]-1)
			p++;
		else if(a[i]==0&&b[i]==2)
			q++;
		else if(b[i]==a[i]-1)
			q++;
		else if(b[i]==0&&a[i]==2)
			p++;
	}
	if(p>q)
		printf("A");
	else if(p<q)
		printf("B");
	else
		printf("Tie");
		  
	return 0;
}
