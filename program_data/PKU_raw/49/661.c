int main()
{
	char s[600];
	scanf("%s",s);
	int l=strlen(s);
	int i,j,k;
	int hw;
	for(i=2;i<=l;i++)  //???
	{
		if(i%2==0)   //????????
		{
			for(j=i/2-1;j<l-i/2;j++)  //?????
			{
				hw=1;    //?????
				for(k=1;k<=i/2;k++)
				{
					if(s[j-k+1]!=s[j+k])
					{
						hw=0;
						break;
					}
				}
				if(hw==1)
				{
					for(k=j-i/2+1;k<=j+i/2;k++)
					{
						printf("%c",s[k]);
					}
					printf("\n");
				}
			}
		}
		else
		if(i%2==1)  //bug1???????????
		{
			for(j=i/2;j<l-i/2-1;j++)
			{             //debug??????????????……
				hw=1;
				for(k=1;k<=i/2;k++)
				{
					if(s[j-k]!=s[j+k])
					{
						hw=0;
						break;
					}
				}
				if(hw==1)//????????????
				{
					for(k=j-i/2;k<=j+i/2;j++)
					{
						printf("%c",s[k]);
					}
					printf("\n");
				}
			}
		}
	}
	return 0;
}
