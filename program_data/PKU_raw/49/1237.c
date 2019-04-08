int main()
{
	char str[501];
	gets(str);

	int len=0;
	while(str[len])
		len++;
    int l=2;
	int i,j;
	char y;
	for(l=2;l<=len;l++)
    {
		i=0;
		for(i=0;i<len-l+1;i++)
        {
			y='y';
			for(j=i;j<l+i;j++)
				if(str[j]!=str[l+2*i-1-j])
					y='n';
			if(y=='y')
			{
				for(j=i;j<l+i;j++)
					printf("%c",str[j]);
                printf("\n");
			}
		}
	}


    return 0;
}