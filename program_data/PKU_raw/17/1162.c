
struct bracket
{
	char data[max];
	int top;
};

int main()
{
	char str[max], flag[max];
	int i, j, len,n;
	struct bracket *leftbracket, *rightbracket;
	scanf("%d\n",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",str);
		//????
		leftbracket = (struct bracket *)malloc(sizeof(struct bracket));
		rightbracket = (struct bracket *)malloc(sizeof(struct bracket));
		leftbracket->top = rightbracket->top = 0;

		len = strlen(str);

		//?????????????
		for(i = 0; i < len; i ++)
		{
			switch(str[i])
			{
				case '(' :
					leftbracket->data[leftbracket->top ++] = str[i];
					flag[i] = ' ';
					break;
				case ')' :
					if(leftbracket->top > 0)
					{
						flag[i] = ' ';
						leftbracket->top -= 1;
					}else
					{
						flag[i] = '?';
					}
					break;
				default :
					flag[i] = ' ';
					break;
			}
		}

		//?????????????
		for(i = len - 1; i >= 0; i --)
		{
			switch(str[i])
			{
				case ')' :
					rightbracket->data[rightbracket->top ++] = str[i];
					break;
				case '(' :
					if(rightbracket->top > 0)
					{
						rightbracket->top -= 1;
					}else
					{
						flag[i] = '$';
					}
					break;
				default :
					break;
			}
		}
		flag[len]='\0';
		//????
		printf("%s\n%s\n", str, flag);

		//?????
		memset(str, '\0', sizeof(str));
		memset(flag, '\0', sizeof(flag));
	}
	return 0;
}