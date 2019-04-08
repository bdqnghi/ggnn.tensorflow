void main()
{
	int i,b[6];
	int reverse(int num);
	for(i=0;i<6;i++)
		scanf("%d",&b[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(b[i]));
}
int reverse(int num)
{
	int k,i,j,wei=1,flag=0,a[8]={0};
	if(num<0) {flag=1;num=-num;}
	k=num;a[0]=num;
	for(i=0;;i++)
	{
		k=k/10;a[i+1]=k;
		if(k==0) break;
	}
	for(j=0;j<=i;j++)
		a[j]=a[j]%10;
	k=0;
	for(j=i;j>=0;j--)
		if (a[j]!=0) break;
	k=a[j];
	for(i=1;i<=j;i++)
	{
	
		wei=wei*10;
		k=k+a[j-i]*wei;
	}
	if (flag==1) k=-k;
	return(k);
}
