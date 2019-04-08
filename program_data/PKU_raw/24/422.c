int main()
{
	int max,min;
	int n,i,b,c;
	int len;
	char str[200][20];
	char x[500];
	gets(x);
	int totalLen=strlen(x);
	x[totalLen]=' ';
	x[totalLen+1]='\0';
	int begin=0,end;
	len=0;
	for (i=0;i<=totalLen;i++)
	{
		if(x[i]==' ')
		{
			end=i;
			strncpy(str[len],&x[begin],end-begin);
			str[len][end-begin]='\0';
			len++;
			begin=i+1;
		}
	}
	max=0;
	min=100;
	for (i=0;i<len;i++)
	{
		if(strlen(str[i])>max){
			max=strlen(str[i]);
			b=i;
		}
		if(strlen(str[i])<min){
			min=strlen(str[i]);
			c=i;
		}
	}
	printf("%s\n%s",str[b],str[c]);
         return 0;
}