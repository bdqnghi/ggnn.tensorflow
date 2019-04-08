void calculate(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		calculate(n-i==1?0:1);
	return 0;
}
void calculate(int isblank)
{
	char large[101],small[101],dif[101];
	int large_len,small_len,digit_L,digit_S,digit_dif;
	char *p_L,*p_S,*p_dif;
	scanf("%s",large);
	scanf("%s",small);
	large_len=strlen(large);
	p_L=large+large_len-1;
	small_len=strlen(small);
	p_S=small+small_len-1;
	p_dif=dif+large_len-1;
	*(p_dif+1)=0;
	while(p_S-small+1)
	{
		digit_L=*p_L-'0';
		digit_S=*p_S-'0';
		digit_dif=digit_L-digit_S;
		if(digit_dif<0)
		{
			digit_dif+=10;
			(*(p_L-1))--;
		}
		*p_dif=digit_dif+'0';
		p_L--;
		p_S--;
		p_dif--;
	}
	while(p_L>=large)
	{
		*p_dif=*p_L;
		if(*p_L<'0')
		{
			*p_dif+=10;
			(*(p_L-1))--;
		}
		p_L--;
		p_dif--;
	}
	do
		p_dif++;
	while(*p_dif=='0');
	if(*p_dif)
		puts(p_dif);
	else
		printf("0\n");
	if(isblank)
		gets(dif);
}


		


		
