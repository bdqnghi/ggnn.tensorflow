struct book
{char name[26];
int number;
}a[1000];
void main()
{ 
	int n,i,j,b[26]={0},max=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %s",&a[i].number,a[i].name);
	for(i=0;i<n;i++)
		for(j=0;a[i].name[j]!='\0';j++)
			b[a[i].name[j]-65]++;
	for(i=0;i<26;i++)
		if(max<b[i])
			max=b[i];
	for(i=0;i<26;i++)
		if(max==b[i])
		{
			t=i;
	break;
		}
		printf("%c\n%d\n",t+65,b[t]);
		for(i=0;i<n;i++)
		for(j=0;a[i].name[j]!='\0';j++)
		if(a[i].name[j]==t+65)
		{
			printf("%d\n",a[i].number);
		break;
		}
}

