
int main()
{
	int i,l11,l21,l,s,l1,l2;
    char a[253],b[253],d[253];
	int a1[253],b1[253],c[253];
         scanf("%s\n%s",&a,&b);
	l11=strlen(a);
	l21=strlen(b);
	if (l11<l21) 
	{  strcpy(d,a);
	   strcpy(a,b);
	   strcpy(b,d);
	}
	l1=strlen(a);
	l2=strlen(b);
	l=l2-1;a1[0]=0;b1[0]=0;
    for (i=l1-1;i>=0;i--)
	{ 
		a1[i+1]=a[i]-'0';
		if (l>=0) {b1[i+1]=b[l]-'0';l--;} else b1[i+1]=0;
	}
    for (i=l1; i>=0;i--)
	{
		c[i]=a1[i]+b1[i];
		if (c[i]>=10) 
		{
			c[i]=c[i]-10;
            a1[i-1]=a1[i-1]+1;
		}
	}
         s=0;
	while (c[s]==0)
            s++;
//	for (i=1;i<=l1;i++)
//		printf("%d",a1[i]);printf("\n");
//	for (i=1;i<=l2;i++)
//		printf("%d",b1[i]);printf("\n");
	for (i=s;i<=l1;i++)
		printf("%d",c[i]);
	if (s>l1) printf("0");
	return 0;
}

