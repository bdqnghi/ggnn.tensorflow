/* Note:Your choice is C IDE */
int huiwen(int);
int sushu(int);
void main()
{
	int m,n,i,sign=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(huiwen(i)&&sushu(i))
		{
			if(sign==0)
			{
				sign=1;printf("%d",i);
			}
			else printf(",%d",i);
		}
	}
	if(!sign) printf("no");
}

int huiwen(int a)
{
	int i,lb;
	char b[100]={'\0'};
	char c[100]={'\0'};
	for(i=0;;i++)
	{
		if(a==0) break;
		b[i]=a%10+'0';
		a=a/10;
	}
	lb=strlen(b);
	for(i=0;i<=lb-1;i++)
	  c[i]=b[lb-1-i];
	if(strcmp(c,b)==0) return 1;
	else return 0;
}

int sushu(int a)
{
	int i;
	for(i=2;i<a;i++)
	  if(a%i==0) break;
	if(i==a) return 1;
	else return 0;
}