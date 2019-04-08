/*??????*/
void arrange(char a[],int l)
{
	int i,j;
	char t;
    for(i=0;i<l;i++)
		for(j=0;j<l-i-1;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}
void main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	int la=strlen(a);
	int lb=strlen(b);
	arrange(a,la);
	arrange(b,lb);
	if(strcmp(a,b)==0&&la==lb) printf("YES\n");
	else printf("NO\n");
}