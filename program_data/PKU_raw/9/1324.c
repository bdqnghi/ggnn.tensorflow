int main()
{
	char s[100][100],a[100][100],b[100];
	int n,i,j=0,sz[100],t,c;
	scanf("%d",&n);
    for(i=0;i<n;i++){
	scanf("%s %d",s[i],&sz[i]);}
	for(i=0;i<n;i++){
		if(sz[i]<60){
			strcpy(a[j],s[i]);
	j++;}}
	for(t=1;t<=n;t++){
	   for(i=0;i<n-t;i++){
        if(sz[i]<sz[i+1]){
            c=sz[i+1];sz[i+1]=sz[i];sz[i]=c;
			strcpy(b,s[i+1]);
			strcpy(s[i+1],s[i]);
			strcpy(s[i],b);}}}
	for(i=0;i<n;i++){
		if(sz[i]>=60){
			printf("%s\n",s[i]);}}
	for(i=0;i<j;i++){
		printf("%s\n",a[i]);}
return 0;
}
