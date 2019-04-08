
void main()
{
	char a[15],b[5];
	while(scanf("%s%s",a,b)!=EOF)
	{		
		char* ptr=a;
		char* insert=a;
		char temp=*ptr;
		while(*(ptr)!='\0')
		{
			if(*(ptr)>temp)
			{
				temp=*(ptr);
				insert=ptr;
			}
			ptr++;
		}
		char* move=ptr+3;
		while(ptr!=insert)
		{
			*move=*ptr;
			move--;
			ptr--;
		}
		move=b;
		ptr++;
		while(*(move)!='\0')
		{
			*ptr=*move;
			move++;
			ptr++;
		}
		printf("%s\n",a);
	}
}
