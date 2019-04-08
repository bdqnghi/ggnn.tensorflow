
int main(int argc, char* argv[])
{
	int i,j,k=0,l,m0,m1,a[100],flag=0;
	char str[3][300];
    for(i=0;i<3;i++)
		scanf("%s",str[i]);
	m0=strlen(str[0]);
	m1=strlen(str[1]);
	for(i=0,j=0;i<m0,j<m1;i++)
	{
		if(str[0][i]==str[1][j])
		{
			j++;
			flag++;
			if(flag==m1)
			{
				k=i-m1;
				break;
			}
		}
		else
		{
			j=0;
			flag=0;
		}
	}
		if(flag==m1)
		{
			for(i=k+1,j=0;i<k+m1+1;i++,j++)
				str[0][i]=str[2][j];
			printf("%s",str[0]);
		}
		else
			printf("%s",str[0]);
		return 0;
}

