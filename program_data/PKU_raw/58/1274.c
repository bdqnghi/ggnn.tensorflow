
int main()
{
	int case_num;
	int i;
	int length;
	int result;
	char identifier[90];
	scanf("%d", &case_num);
	gets(identifier);
	while(case_num --) {
		gets(identifier);
		length = strlen(identifier);
		result = 1;
		if (length == 0 ||!(identifier[0] == '_' || isalpha((int)identifier[0])))
			result = 0;
		for (i = 1; i < length; i ++) {
			if (!(identifier[i] == '_' || isalpha((int)identifier[i]) || isdigit((int)identifier[i])))
				result = 0;
		}
		printf("%d\n", result);
	}
	return 0;
}
