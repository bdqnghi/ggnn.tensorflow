int main()
{
	int len,i,j,k;
	char a[501];
	scanf("%s",&a);
	len=strlen(a);
	for(j=1;j<len;j++)//??????
	{
		for(i=0;i<len-1;i++)//??????
		{
			int e=0;
			if((j+1)%2==0)
			{
				for(k=i;k<=(j+1)/2+i-1;k++)//??????????
				{
					if(a[k]!=a[i+i+j-k])
					{
						e=1;
						break;
					}
				}

			}else
			{
				for(k=i;k<=(j/2-1+i);k++)
				{
					if(a[k]!=a[i+i+j-k])
					{
						e=1;
						break;
					}
				}
			}
			if(e==0)  //????
			{
				for(k=i;k<i+j;k++)
				{
					printf("%c",a[k]);
				}
				printf("%c\n",a[i+j]);
			}
		}
	}
	return 0;
}
