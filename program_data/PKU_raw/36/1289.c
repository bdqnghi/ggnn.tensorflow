int main(int argc, char* argv[])
{
    int la,lb,i,j,count=0;
	char a[100],b[100];
	scanf("%s %s",a,b);
    la=strlen(a);
	lb=strlen(b);
	if(la!=lb)
	{
		printf("NO");
	}
	else
	{
	    for(i=0;i<la;i++)
		{
		    for(j=0;j<lb;j++)
			{
				if(a[i]==b[j])
				{
					
					b[j]=j;
					count++;
					break;
				}
			}
		}
		if(count==la)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}


	return 0;
}