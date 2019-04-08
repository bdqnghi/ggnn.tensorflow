
int main(int argc, char* argv[])
{
	char a[50],b[50];
	scanf("%s %s",a,b);
	int la,lb;
	la=strlen(a);
	lb=strlen(b);
	int i,j;
	int k=0;
	for (i=0;i<lb;i++)
	{
		if(a[0]==b[i])
		{
			for (j=1;j<la;j++)
			{
				if (a[j]!=b[i+j])
					break;
				else k++;
			}
			if (k==la-1)printf("%d\n",i);
		}
	}
	return 0;
}
