
int main()
{	
	int i,k;
	char list[5],list1[5];
	
	gets(list);
	for(k=0;k<5;k++)
		if(list[k]=='\0')
			break;

	for(i=0;i<k;i++)
		list1[i]=list[k-i-1];
	for(i=0;i<k;i++)
	{
		printf("%c",list1[i]);
	}



	
	return 0;
}

