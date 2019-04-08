
//?????0???
void cutzeros(char* a)
{
	int i;
	int unzero=0;
	int l=strlen(a);
	for(i=l-1;i>=0;i--)
	{
		if(a[i]!='0')    //???????
		{
		//	printf("%d %d\n",i,a[i]);  //debug
			a[i+1]='\0';
			unzero=1;
			break;
		}
	}
	if(unzero==0)   //??????
	{
		a[0]='0';
		a[1]='\0';
	}
}
//??????
void reorder(char*a)
{
	int i;
	char c;
	int l=strlen(a);
	for(i=0;i<l/2;i++)
	{
		c=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=c;
	}
}
//????????
char result[300];
void plus(char*a,char*b)
{
	int i;
	int la=strlen(a);
	int lb=strlen(b);
	int l;
	int r,left=0;
	if(la<=lb)
	{
		l=lb;
		for(i=la;i<=lb;i++)
			a[i]='0';
		b[lb]='0';
	}
	else
	{
		l=la;
		for(i=lb;i<=la;i++)
			b[i]='0';
		a[la]='0';
	}
	for(i=0;i<=l;i++)
	{
		r=(a[i]-'0')+(b[i]-'0')+left;
		result[i]=r%10+'0';
		left=r/10;   //??
	}
	result[l+1]='\0';   //????
}
int main()
{
	char a[260];
	char b[260];
	scanf("%s%s",a,b);
	reorder(a);
	reorder(b);
	plus(a,b);
	cutzeros(result);
	reorder(result);
	printf("%s",result);
	return 0;
}
