
void main()
{
	int a[300]={0},len=0,i=0,flag=1,j;
	char c;
	while((c=getchar())!='\n')
	{
		if(c!=' ')
			if(flag)
			{flag=0;len++;}
			else len++;
		else if(flag==0){flag=1;a[i]=len;len=0;i++;}
	}
	a[i]=len;
	for(j=0;j<i;j++)
		printf("%d,",a[j]);
	printf("%d\n",a[j]);
}