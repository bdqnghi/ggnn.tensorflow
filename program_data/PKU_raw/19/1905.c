int main(void)
{
	char a[100],b[100],c[100],d[100],e[100]="\0";
	int i,j;
	char *s;
	gets(a);
	gets(b);
	gets(c);
    s=a;
	strcat(a," ");
	for(i=0;a[i]!='\0';i++)
	{
		j=0;
		while(a[i]!=' ')
		{
			d[j]=a[i];
			i++;
			j++;	
		}
		d[j]='\0';
		if((!strcmp(d,b))&&(d[0]!='\0'))
		{
			strcat(e,c);	
		}
		else
		{
			strcat(e,d);	 
		}
		if(a[i+1]!='\0') strcat(e," ");
		
	}
		puts(e);
}
