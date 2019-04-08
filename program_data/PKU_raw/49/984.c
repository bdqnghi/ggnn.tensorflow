void strre(char a[])
{
	int i,j,k;
	char t;
	k=strlen(a);
	for(j=0,i=k-1;j<k/2;j++,i--)
	{
		t=a[j];
		a[j]=a[i];
		a[i]=t;
	}
}
void main()
{
	int i,j,k=0,t;
	char a[600],b[500][500],c[500],d[500];
	gets(a);
	t=strlen(a);
	for(i=0;i<t-2;i++)
		for(j=i+1;j<t;j++)
		{
			strncpy(c,a+i,j-i+1);
			c[j-i+1]='\0';
			strcpy(d,c);
			strre(d);
			if(!strcmp(c,d))
			{
				strcpy(b[k],c);
				k++;
			}
			strcpy(b[k],"\0");
		}
	for(i=0;i<k-1;i++)
		for(j=0;j<k-i-1;j++)
		{
			if(strlen(b[j])>strlen(b[j+1]))
			{
				strcpy(c,b[j]);
				strcpy(b[j],b[j+1]);
				strcpy(b[j+1],c);
			}
		}
	for(i=0;i<k;i++)
		printf("%s\n",b[i]);
}