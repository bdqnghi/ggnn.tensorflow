int main ()
{
	int i,j,k,a,b;
	int s[100][100];
	scanf("%d%d",&a,&b);
	for(j=0;j<a;j++)
	{
		for(i=0;i<b;i++)
		{
			scanf("%d",&s[j][i]);
		}
	}
	for(j=0;j<b;j++)
	{
		k=j;
		for(i=0;;i++)
		{
			if(i==a)
			{
				break;
			}
			printf("%d\n",s[i][k]);
			k--;
			if(k<0)
			{
				break;
			}
		}
	}
	for(j=1;j<a;j++)
	{
		k=j;
		for(i=b-1;i>=0;i--)
		{
            printf("%d\n",s[k][i]);
			k++;
			if(k==a)
			{break;}
		}
	}
	return 0;
}