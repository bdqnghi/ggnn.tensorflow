int main()
{
	char zfc[257],a[50],b[50];
	int i,j,k;
	scanf("%s%s%s",zfc,a,b);
	for(i=0;i<strlen(zfc);i++)
	{
		if(a[0]==zfc[i])
		{
			for(j=1;j<strlen(a);j++)
			{
				if(a[j]!=zfc[i+j])
					break;
			}
			if(j==strlen(a))
				break;
		}
	}
	if(j==strlen(a))
	{
	   for(k=0;k<i;k++)
		   printf("%c",zfc[k]);
	   for(k=i;k<i+strlen(b);k++)
		   printf("%c",b[k-i]);
	   for(k=i+strlen(b);k<strlen(zfc);k++)
		   printf("%c",zfc[k]);
	   }
	else
		printf("%s",zfc);
	return 0;
}