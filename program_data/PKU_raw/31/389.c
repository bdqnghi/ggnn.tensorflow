void main()
{
    char stu[10000][100],tem[100]={'e','n','d'};
    int i,j;
	for (i=0;i<10000;i++)
	{
		gets(stu[i]);
	
		if (strcmp(stu[i],tem)==0)break;
	}
	for(j=i-1;j>=0;--j)
	printf("%s\n",stu[j]);
}