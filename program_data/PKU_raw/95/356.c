
int main(int argc, char* argv[])
{
	int i,j;
	char a[80],b[80],c[80],d[80];
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			c[i]=a[i]-32;
		}
		else c[i]=a[i];
	}
	c[i]='\0';
	for(j=0;b[j]!='\0';j++)
	{
		if(b[j]>='a'&&b[j]<='z')
		{
			d[j]=b[j]-32;
		}
		else d[j]=b[j];
	}
	d[j]='\0';
	if(strcmp(c,d)==0) printf("=");
	if(strcmp(c,d)>0) printf(">");
	if(strcmp(c,d)<0) printf("<"); 
	return 0;
}