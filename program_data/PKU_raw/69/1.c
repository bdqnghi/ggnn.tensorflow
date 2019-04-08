void main()
{
	char a[300]={0},b[300]={0};
	int n1[300]={0},n2[300]={0},n3[300]={0},i,t,k=0;
	gets(a);gets(b);
	t=strlen(a);
	for(i=0;i<t;i++)
		n1[300-t+i]=a[i]-48;
	t=strlen(b);
	for(i=0;i<t;i++)
		n2[300-t+i]=b[i]-48;
	for(i=0;i<300;i++)
		n3[i]=n1[i]+n2[i];
	for(i=299;i>=0;i--)
		if(n3[i]>9){n3[i]=n3[i]-10;n3[i-1]++;}
	for(i=0;i<299;i++)
	{
		if(n3[i]!=0&&k==0){printf("%d",n3[i]);k++;}
		else if(k==1) printf("%d",n3[i]);
	}
		printf("%d",n3[299]);
}