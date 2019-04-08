int main()
{
	char str[6000],a[200][30],max[30],min[30];
	int i,j=0,k=0;
	gets(str);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==' '||str[i]==',')
		{
			a[j][k]=0;
			j++;
			k=0;
		}
		else
		{
			a[j][k]=str[i];
			k++;
		}
	}
	a[j][k]=0;
	strcpy(max,a[0]);
	for(i=1;i<j+1;i++)
	{
		if(strlen(a[i])>strlen(max))
			strcpy(max,a[i]);
	}
	strcpy(min,a[0]);
	for(i=1;i<j+1;i++)
	{
		if(strlen(a[i])<strlen(min)&&strlen(a[i])>=1)
			strcpy(min,a[i]);
	}
	printf("%s\n%s\n",max,min);
	return 0;
}


