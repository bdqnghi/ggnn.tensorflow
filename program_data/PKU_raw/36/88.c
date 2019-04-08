int main()
{
	char a[100],b[100],c,d;
	char *p,*q;
	int al,bl,i,j;
	scanf("%s",&a);
	scanf("%s",&b);
	al=strlen(a);
	bl=strlen(b);
	p=a;
	q=b;
		for(j=0;j<al;j++)
		{
			for(i=0;i<al+1-j;i++)
			{
				if(*(p+i)<*(p+i+1))
				{
					c=*(p+i);
					*(p+i)=*(p+i+1);
					*(p+i+1)=c;
				}
			}
		}
		for(j=0;j<bl;j++)
		{
			for(i=0;i<bl+1-j;i++)
			{
				if(*(q+i)<*(q+i+1))
				{
					d=*(q+i);
					*(q+i)=*(q+i+1);
					*(q+i+1)=d;
				}
			}
		}
		if(strcmp(a,b)==0)
			printf("YES");
		else
			printf("NO");

	return 0;
}

