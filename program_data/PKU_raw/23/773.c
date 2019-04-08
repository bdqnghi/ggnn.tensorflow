int Strlen(char *ch1)
{
	int i=0;
    for(i=0;ch1[i]!='\0';i++);
    return i;
}
void main()
{
	char ch1[100],ch2[100],a[20];
    int i,j,k=0;
	gets(ch1);
	for(i=Strlen(ch1)-1;i>=0;i--)
	{
		if(ch1[i]!=' ')
		{
			j=0;
			do
			{
				a[j++]=ch1[i--];
			}
			while(ch1[i]!=' '&&i>=0);
			a[j]=' ';
			for(j=j;j>=0;j--,k++)
				ch2[k-1]=a[j];
			i++;
		}
	}
ch2[k-1]='\0';
printf("%s\n",ch2);
} 
