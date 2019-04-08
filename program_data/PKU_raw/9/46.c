void main()
{
	int n,i,j,a[100],b[100],c[100]={0},t,sum=0;char s[100][10],sb[100][10],st[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d",s[i],a+i);if(a[i]>=60)
		{
			c[i]=1,b[sum]=a[i],strcpy(sb[sum],s[i]),sum++;
	}}
	for(i=1;i<sum;i++)for(j=0;j<sum-i;j++)if(b[j]<b[j+1])t=b[j],b[j]=b[j+1],b[j+1]=t,strcpy(st,sb[j]),strcpy(sb[j],sb[j+1]),strcpy(sb[j+1],st);
	for(i=0;i<sum;i++)printf("%s\n",sb[i]);
	for(i=0;i<n;i++)if(c[i]==0)printf("%s\n",s[i]);
	}
