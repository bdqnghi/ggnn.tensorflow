void main()
{
	char a[50],b[50];
	scanf("%s",a);
	scanf("%s",b);
	int i,k,t=1;
	for(k=0;k<=(int)strlen(b);k++)
	{
		for(i=0;i<(int)strlen(a);i++)
           if(a[i]==b[k+i])
				t=1;
			else
			{
				t=0;
				break;
			}
			if(t==1)
			break;
	}
	if(t==0)
		printf("0");
	else
		printf("%d",k);
    printf("\n");
}