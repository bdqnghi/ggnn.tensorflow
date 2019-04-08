
void main()
{
	char a[100],b[100][100]={'\0'};
	int l[100]={0};
	int i=0,min=0,max=0,j;

	do
	{
		for(j=0;j<100;j++)
		a[j]='\0';

		scanf("%s",a);
		
		l[i]=strlen(a);

			
		for(j=0;j<l[i];j++)
		b[i][j]=a[j];

		i++;
	}
	while(getchar()!='\n');

for(j=0;j<i;j++)
{
	max=(l[max]>=l[j])?max:j;
	min=(l[min]<=l[j])?min:j;
}



for(i=0;i<l[max];i++)
printf("%c",b[max][i]);

printf("\n");

for(i=0;i<l[min];i++)
printf("%c",b[min][i]);


}
