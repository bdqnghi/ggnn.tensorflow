void dele0(char *a)
{	int i,j;
	for(i=0;*(a+i)=='0';i++);
	for(j=0;*(a+j+i)!=0;j++)
	{	*(a+j)=*(a+i+j);	}*(a+j)=0;
}

void main()
{
	int i,a1,b1,add=0;
	char a[300],b[300],c[300];
	scanf("%s",a);dele0(a);
	scanf("%s",b);dele0(b);
	a1=strlen(a);
	b1=strlen(b);
	for(i=0;i<a1&&i<b1;i++)
	{	if(a[a1-i-1]+b[b1-i-1]-'0'-'0'+add>9){c[i]=a[a1-i-1]+b[b1-i-1]-'0'-10+add;add=1;}
		else {c[i]=a[a1-i-1]+b[b1-i-1]-'0'+add;add=0;}
	}

	if(i==a1)
	{	for(;i<b1;i++)
		{	if(b[b1-i-1]-'0'+add>9){c[i]=b[b1-i-1]-10+add;add=1;}
			else {c[i]=b[b1-i-1]+add;add=0;}
		}	
	}
	else 
	{	for(;i<a1;i++)
		{	if(a[a1-i-1]-'0'+add>9){c[i]=a[a1-i-1]-10+add;add=1;}
			else {c[i]=a[a1-i-1]+add;add=0;}
		}	
	}if(add==1)	printf("1");
	if(i==0)printf("0");
	else for(;i>0;i--)
			printf("%c",c[i-1]);

}