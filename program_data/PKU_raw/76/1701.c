int main()
{
    int i,j,a[50000],b[50000],c[10000],n,p,q,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<10000;i++){
		c[i]=0;
	}
	for(i=0,k=0;i<n;i++){
		for(j=a[i];1;1){
			if(a[i]==b[i])
				break;
			if(c[j]==0){
				c[j]=1;
				k++;}
			j++;
		if(j>=b[i]) 
			break;
		}
}
for(i=0,p=a[0],q=b[0];i<n;i++){
	if(a[i]<p)
		p=a[i];
	if(b[i]>q)
		q=b[i];
}
if(q-p==k)
printf("%d %d",p,q);
else
printf("no");




		return 0;
}


