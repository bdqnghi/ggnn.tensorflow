void main()
{
	char a[256]={0},b[256]={0};
	int f=0,k,l1,l2,i,j,n1[256]={0},n2[256]={0},n[256]={0};

	gets(a);
    l1=strlen(a);
    k=l1-1;
	for(i=255;i>255-l1;i--)
	{
		n1[i]=a[k]-48;
		k--;
	}

	gets(b);
    l2=strlen(b);
	k=l2-1;
	for(i=255;i>255-l2;i--)
	{
		n2[i]=b[k]-48;
		k--;
	}

    for(i=255;i>255-l1||i>255-l2;i--)
	{
		n[i]=n[i]+n1[i]+n2[i];
		if(n[i]>=10)
		{
			n[i-1]+=1;
			n[i]-=10;
		}
	}
	k=i;
    for(i=k;i<=255;i++)
	{
		if(n[i]==0&&f==0)
			continue;
		printf("%d",n[i]);
		f=1;
	}
	if(l1==1&&l2==1&&n[255]==0)
		printf("0");
}
