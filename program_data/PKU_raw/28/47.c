void main()
{
	char a;
	int length[500]={0};
	int i,j=0,sign=0;
 	for(i=0;;i++)
	{
		scanf("%c",&a);
		if(a!=' '&&a!='\n') length[j]++;
		else if(a==' ') j++;
		else break;
	}
	for(i=0;i<=499;i++)
	{
		if(length[i]!=0)
		{
			if(sign==0)
			{
				printf("%d",length[i]);
				sign=1;
			}
			else printf(",%d",length[i]);
		}
	}
}