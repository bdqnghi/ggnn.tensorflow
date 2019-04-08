main()
{
	char a[1000];
	int num=1;
	int i,j;
	gets (a);
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]==a[i+1]||a[i]==a[i+1]+32||a[i]==a[i+1]-32)//?????????? 
		{
		num++;
		}
		else
		{
		if (a[i]<91)//??????? 
		printf("(%c,%d)",a[i],num);//?????? 
		else
		printf("(%c,%d)",a[i]-32,num);
		num=1;
		}		
	}
}
