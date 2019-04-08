int main()
{
	char *org;
	org=(char*)malloc(30*sizeof(char));
	gets(org);
	int i,j,count;
	for(i=0;*(org+i)!='\0';i++)
	{
		if(*(org+i)>='0'&&*(org+i)<='9')
		{
			count=0;
			printf("%c",*(org+i));
		}
		else
		{
			if(i!=0&&count==0)printf("\n");
			count++;
		}
	}
}

