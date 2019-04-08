void main()
{
	char a[100],b[100],c[100],d[200];int l1,l2,l3,i,j,k=0;
	gets(a);
	scanf("%s%s",b,c);
    l1=strlen(a);l2=strlen(b);l3=strlen(c);
	for(i=0;i<l1;i++)
	{
		if(a[i-1]==' '||i==0)
		{
			for(j=0;j<l2;j++)
			if(a[i+j]!=b[j]) break;
			if(j==l2)
			{for(j=0;j<l3;j++,k++)
			d[k]=c[j];
			i=i+l2-1;}
			else {d[k]=a[i];k++;}
		}
		else  {d[k]=a[i];k++;}
	}
	d[k]='\0';
    printf("%s",d);
}