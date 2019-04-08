int main()
{
	//n??????
	int n;
	scanf("%d",&n);
	int i1;
	for(i1=0;i1<=n-1;i1++)
	{
		char str[100000];

		scanf("%s",str);
		int length;
		length=strlen(str);
		int counter;
		int i3;
		for(i3=0;i3<=length-1;i3++)
		{
			counter=0;
			char tmp;
			tmp=str[i3];
			int i4;
			for(i4=0;i4<=length-1;i4++)
			{
				if(str[i3]==str[i4])
				{
					counter++;
				}
				//????????????????
				if(counter>1)
				{
					break;
				}
			}
			if(counter==1)
			{
				printf("%c\n",str[i3]);
				break;
			}
		}
		if(i3==length)
		{
			printf("no\n");
		}
	}
	return 0;
}