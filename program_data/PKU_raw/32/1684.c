
void MINUS(char* a,char* b);
void main()
{
	char jian[50][200],beijian[50][200];
	int n;
	int i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",beijian[i]);
		scanf("%s",jian[i]);
	}
	for(i=0;i<n;i++)
	{
		MINUS(beijian[i],jian[i]);
	}
}

void MINUS(char* a,char* btemp)
{
	int lena,lenb;
	int i,j;
	char b[200];
	int temp=0;
	char tt='0';
	lena=strlen(a);
	lenb=strlen(btemp);
	for(i=0;i<lena-lenb;i++)//??
		b[i]='0';
	for(j=i+1;i<200;i++){
		b[i]=btemp[i-lena+lenb];
		}
	for(i=lena-1;i>=0;i--)
	{
		if(a[i]-b[i]+temp>=0){a[i]=a[i]-b[i]+temp+48;
		temp=0;}
		else{
			a[i]=a[i]-b[i]+temp+48+10;
			temp=-1;
		}
	}
for(i=0;i<200;i++)
{	
	if(a[i]=='\0')break;
	if(a[i]!=tt){putchar(a[i]);
	tt='*';}

}
putchar('\n');
}



