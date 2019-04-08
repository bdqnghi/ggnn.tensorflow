

int main(int argc, char* argv[])
{
	char p[101]={'\0'},temp,a,b;
	int i=0,j;
	scanf("%s",p);
	while (p[i]!='\0')
	{
		if (i==0)
		{
			i++;
			continue;
		}
		if (p[i-1]==p[i])
		{
			a=p[i-1];
		}
		else 
		{
			a=p[i-1];
			b=p[i];
			if (a>b)
			{
				temp=a+1;
			}
			else
			{
				temp=b+1;
			}
			break;
		}
		i++;
	}
	i=0;
	while (p[i]!='\0')
	{
		if (p[i]==b)
		{
			for (j=i-1;j>=0;j--)
			{
				if (p[j]==a)
				{
					printf("%d %d\n",j,i);
					p[j]=temp;
					break;
				}
				
			}
		}
		i++;
	}
	return 0;
}


