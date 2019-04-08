char a[32];
int b[32];
char trans[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R',
'S','T','U','V','W','X','Y','Z'};
int main()
{
	int n,m;
	int i,j,k;
	long int mid;
	int ar;
	scanf("%d %s %d",&n,a,&m);
	int len=strlen(a);
	for(k=0;k<len;k++)
	{
		if((a[k]>='0')&&(a[k]<='9'))
			a[k]-='0';
		if((a[k]>='a')&&(a[k]<='z'))
			a[k]=a[k]-'a'+10;
		if((a[k]>='A')&&(a[k]<='Z'))
			a[k]=a[k]-'A'+10;
		
	}
	mid=0;
	ar=1;
	for(j=len-1;j>=0;j--)
	{
		mid+=a[j]*ar;
		ar*=n;
	}
	k=0;
	while(mid!=0)
	{
		b[k]=mid%m;
		mid=mid/m;
		k++;
	}
	for(i=k-1;i>=0;i--)
		if(b[i]!=-1)
			printf("%c",trans[b[i]]);
		printf("\n");
	return 0;
}
