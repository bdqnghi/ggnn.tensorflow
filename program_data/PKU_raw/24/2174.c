void main()
{
char a[100][20],c;
int b[100],k=0,i,max=0,min=100,s,t;
do
	{
		scanf("%s",a[k]);
		k++;
		scanf("%c",&c);
	}
	while(c!='\n');
for(i=0;i<k;i++)
{
	b[i]=strlen(a[i]);
	if(b[i]>max)
	{
		max=b[i];
		s=i;
	}
	if(b[i]<min)
	{
		min=b[i];
		t=i;
	}
}
printf("%s\n%s\n",a[s],a[t]);
}
