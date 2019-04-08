void main()
{
	struct x
	{
		char num[26];
		int y;
	}q[1000],x0;
	
	int n,i,j,c[100]={0},m=0,f;

	scanf("%d",&n);
		for(i=0;i<n;i++)
		{scanf("%d %s",&q[i].y,&q[i].num);}

	for(i=0;i<n;i++)
		for(j=0;q[i].num[j]!='\0';j++)
                  m=(int)q[i].num[j],c[m]=c[m]+1;
	
for(m=0;m<100;m++)
if(c[m]>c[0])
f=m,c[0]=c[m];

printf("%c\n%d\n",(char)f,c[f]);
for(i=0;i<n;i++)
for(j=0;q[i].num[j]!='\0';j++)
if(q[i].num[j]==(char)f)
printf("%d\n",q[i].y);

}