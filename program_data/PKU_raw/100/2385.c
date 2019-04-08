void main()
{
	int t=0,i,k,count,num[200]={0},fuck=0;
	char a[1000],b[520];
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		if((a[i]>='a')&&(a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			count=a[i];
			num[count]++;
		}
	}
	for(i=0;i<200;i++)
	{
		if(num[i]!=0) {printf("%c=%d\n",i,num[i]);fuck=1;}
			
	}
        fuck==0?printf("No"):fuck;
}

