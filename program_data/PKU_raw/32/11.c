
void f(char a[100],char b[100])
{
	int n1[100]={0},n2[100]={0},n3[100]={0};
	int i,j,k,t;
	
	// ?a[100]????n1[100]
	{i=99;
	while(a[i]==0)
		i=i-1;}
	{j=99;
	while(j>=99-i)
	{a[j]=a[i+j-99];j--;}}
	k=0;
	while(k<=98-i)
	{a[k]='0';k++;}
	for(t=0;t<=99;t++)
		n1[t]=a[t]-48;

	//?b[100]????n2[100]
	{i=99;
	while(b[i]==0)
		i=i-1;}
	{j=99;
	while(j>=99-i)
	{b[j]=b[i+j-99];j--;}}
	k=0;
	while(k<=98-i)
	{b[k]='0';k++;}
	for(t=0;t<=99;t++)
		n2[t]=b[t]-48;

	//?n1?n2?n3
	i=99;
	while(i>=0)
		{n3[i]=n1[i]-n2[i];
		i--;}

	for(j=99;j>=1;j--)
		{if(n3[j]<0)
		{n3[j]=n3[j]+10;k=j-1;
		n3[k]=n3[k]-1;
		}}
	j=1;
	while(n3[j]==0)j++;printf("\n");
	//????
	i=j;
	while(i<=99)
	{printf("%d",n3[i]);
	i++;}
	for(i=0;i<100;i++){n1[i]=0;n2[i]=0;n3[i]=0;}
}

void main()
{
	char tt[100][100]={0},uu[100][100]={0},tet[100][100]={0},iii[100][100]={0};
	int n,i;
	char a[10][100]={{0}},b[10][100]={{0}};char x[100]={0},y[100]={0},x1[100]={0},y1[100]={0};printf("%s",a[0]);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",a[i]);scanf("%s",b[i]);}
	for(i=0;i<n;i++)
		f(a[i],b[i]);
}
