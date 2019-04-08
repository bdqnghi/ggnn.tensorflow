struct student
{
	char stu[100];
}a[10000];
void main()
{
	int i,j;
	for(i=0;;i++)
	{
		gets(a[i].stu);
		if(a[i].stu[0]=='e')
		{
			a[i].stu[0]='\0';
			break;
		}
	}
	for(j=i;j>=0;j--)
	{
		puts(a[j].stu);
	}
}
	
	
