int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int picture[1000][1000];
	int hang[1000];
	int i,j;
	int m=0,mg=0,l=0,number;
	for(i=0;i<n;i++)
	{
		hang[i]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&picture[i][j]);
			if(picture[i][j]==0)
			{
				hang[i]=hang[i]+1;
			}
		}
		if(hang[i]>2&&m==0)
		{
			m=i;
			mg=hang[i];
		}
		else if(hang[i]>2&&m>0)
		{
			l=i;
		}
	}
	number=(l-m-1)*(mg-2);
	printf("%d",number);

	return 0;
}

