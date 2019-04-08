int main()
{
	int n,a[100],l[100],b[100],i=0,j,k,p=0,q=0,t=0;
	char s[100][12],lao[100][13]={'\0'},bu[100][13]={'\0'},w[12]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",&s[i],&a[i]);
	if(a[i]>=60)l[p]=a[i],strcpy(lao[p],s[i]),p++;
	else b[q]=a[i],strcpy(bu[q],s[i]),q++;}

	for(i=0;i<p;i++){
		for(j=0;j<p-1;j++){
			if(l[j]<l[j+1])t=l[j],l[j]=l[j+1],l[j+1]=t,strcpy(w,lao[j]),strcpy(lao[j],lao[j+1]),strcpy(lao[j+1],w);
	}}
	for(i=0;i<p;i++){printf("%s\n",lao[i]);}
	for(i=0;i<q;i++){printf("%s\n",bu[i]);}
}