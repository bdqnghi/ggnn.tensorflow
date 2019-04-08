void main()
{
	char a[300],b[300];
	int sa[128]={0},sb[128]={0};
	int i,j=0,k=1,n;
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))k=0;
	else
		for(i=0;i<strlen(a);i++)
		{
			j=(int)(a[i]);
			n=(int)(b[i]);
			sa[j]=sa[j]+1;
			sb[n]=sb[n]+1;
		}
		for(i=0;i<128;i++)
		{
			if(sa[i]!=sb[i])
			{
				k=0;
				break;
			}
		}
	if(k==0)printf("NO");
	else
		printf("YES");
}