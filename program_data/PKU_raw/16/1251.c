
int main(void)
{
	char x[6];
	gets(x);
	int i;
	
	for(i = 5;i >= 0;i--)
	if(x[i] == '0'||x[i] == '1'||x[i] == '2'||x[i] == '3'||x[i] == '4'||x[i] == '5'||x[i] == '6'||x[i] == '7'||x[i] == '8'||x[i] == '9') break;
	
	for(int j = i;j >= 0;j--)
	printf("%c",x[j]);
	
	return 0;
}