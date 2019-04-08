
void subtract(char a[100], char b[100])
{
	int re[100];
	int lena,lenb,i,j,m=0;
	lena=strlen(a);
	lenb=strlen(b);

	
	for(i=0;i<lena;i++)
		re[i]=a[i]-48;
	for(i=lena-1,j=lenb-1;j>=0;i--,j--)
	{
		re[i]=re[i]+48-b[j];
		if(re[i]<0)
		{
			re[i-1]--;
			re[i]+=10;
		}
	}

	for(i=0;i<lena;i++)
	{
		if(m==0&&re[i]==0)continue;
		else {printf("%d",re[i]);m=1;}
	}

	printf("\n");
}




main()
{



	int n,i,k;
	char inp[100][100];

	scanf("%d",&n);
	k=3*n;
//	printf("k=%d\n",k);
	for(i=0;i<k;i++)
	{
//		printf("i=%d\n",i);
		gets(inp[i]);
//		printf("i=%d\n",i);
	}
//	printf("len=%d\n",strlen(inp[0]));
//	printf("str=%s\n",inp[3]);

	for(i=0;i<n;i++)
		subtract(inp[3*i+1],inp[3*i+2]);

}