main()
{
	int p;
	scanf("%d",&p);
	while(p>0)
	{
	char a[101],b[101],c[101]={0},a1[101]={0},b1[101]={0};int lena,lenb;
	int i,j;
	scanf("%s",a);
	scanf("%s",b);
	lena=strlen(a);
	lenb=strlen(b);
	
	for(i=0;i<lena;i++)
		a1[i+101-lena]=a[i];
	for(i=0;i<lenb;i++)
		b1[i+101-lenb]=b[i];

	int carry=0;
	for(j=100;j>=100-(lena-1);j--)
	{
		if (b1[j]==0) {c[j]=a1[j]-carry;carry=0;}
		else
		{
		if(a1[j]>b1[j]){
			c[j]=a1[j]-b1[j]-carry+'0';carry=0;}
		else
		{
			if (a1[j]==b1[j]&&carry==0) c[j]='0';
			else
			{
			c[j]=10+a1[j]-b1[j]-carry+'0';
			carry=1;
			}
		}}
		
	}
	int temp=0;

	for(i=0;i<101;i++)
	{
		if(c[i]!=0)
		{
			temp=i;break;
		}
	}

	for(i=temp;i<101;i++)
			printf("%c",c[i]);
	printf("\n");
	p--;
	}
}
