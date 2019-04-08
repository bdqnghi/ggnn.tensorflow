

int main()
{
	int i,j,k;
char a[256],b[256],c[256];
scanf("%s",a);
scanf("%s",b);
scanf("%s",c);
for(i=0;i<256;i++)
{	k=0;
	for(j=0;j<strlen(b);j++)
	{
		if(a[j+i]!=b[j])
		{
			k=1;break;}
	}
	//printf("%d",k);
	if(k==0)
	{	for(j=0;j<i;j++)
			printf("%c",a[j]);
		for(j=0;j<strlen(c);j++)
			printf("%c",c[j]);
		for(j=i+strlen(b);j<strlen(a);j++)
			printf("%c",a[j]);
	
		break;
	}

}if(k==1)
	{
		for(j=0;j<strlen(a);j++)
			printf("%c",a[j]);
	
	}
//	printf("\n");
	return 0;
}
	