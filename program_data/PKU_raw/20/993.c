
int main(int argc, char* argv[])
{
	int max,i,j,e,k;
	char str[11],substr[4];
	for(;;)
	{
		max=0;
		if(scanf("%s%s",str,substr)!=EOF)
		{
			for(i=0;str[i];i++)
			{
				if(str[i]>max)
				{
					max=str[i];
					e=i;
				}
			}
			for(j=0;j<e+1;j++)
			{
				printf("%c",str[j]);
			}
			printf("%s",substr);
			for(k=e+1;str[k];k++)
				printf("%c",str[k]);
			printf("\n");
		}
		else
			break;
	}
			return 0;
		}