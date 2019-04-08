
int main(int argc, char* argv[])
{
	int n,i,j;
	struct wordName{
		char name[100];
	}*list,tmp;

	scanf("%d", &n);

	list = (struct wordName *)malloc(sizeof(struct wordName)*n);
	for(i=0;i<n;i++)
	{
		scanf("%s",list[i].name);
	}

	for(i=0;i<n;i++)
	{
		int len = strlen(list[i].name);
		if(list[i].name[len-1]=='g'&&list[i].name[len-2]=='n'&&list[i].name[len-3]=='i')
		{
			list[i].name[len-3]='\0';
		}
		else if(list[i].name[len-1]=='r'&&list[i].name[len-2]=='e')
		{
			list[i].name[len-2]='\0';
		}
		else if(list[i].name[len-1]=='y'&&list[i].name[len-2]=='l')
		{
			list[i].name[len-2]='\0';
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%s\n",list[i].name);
	}

	return 0;
}