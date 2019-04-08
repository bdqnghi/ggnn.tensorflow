void main()
{
	int a[8][8],i,j,k,l,s=0,m[8],n[8],f=0;
	scanf("%d,%d",&i,&j);
	for(k=0;k<i;k++)
		for(l=0;l<j;l++)
			scanf("%d",&a[k][l]);
	for(k=0;k<i;k++)
		for(s=l=0;l<j;l++)
			if(s<=a[k][l]){
				s=a[k][l];
				m[k]=l;}
	for(k=0;k<j;k++)
		for(s=10000,l=0;l<i;l++)
			if(s>=a[l][k]){
				s=a[l][k];
				n[k]=l;}
	for(k=0;k<i;k++)
		if(n[m[k]]==k){
			f=1;
			break;}
	if(f==1)
		printf("%d+%d\n",k,m[k]);
	else
		printf("No\n");
}