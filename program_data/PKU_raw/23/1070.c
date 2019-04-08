
int main()
{
	char a[100][100];
	int i=0,j;

			while(1)
	{
		scanf("%s",a[i]);
	    if ((a[i][0]>=65)&&(a[i][0]<=122))
			;
		else
			break;
		i++;
	
	}
	i--;
	for (j=i;j>=1;j--)
    printf("%s ",a[j]);
    printf("%s",a[0]);
    
	return 0;
}
