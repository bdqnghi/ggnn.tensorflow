int main()
{
	int n,i,x,j,y,f,z[26],k,m;
	char a[100][10000],b[26];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		f=0;
		for(x=0;x<26;x++)
		{
			z[x]=0;
				
		}
		for(j=0;j<strlen(a[i]);j++)
		{
			z[a[i][j]-'a']++;
		}
		y=0;
		k=0;
		for(x=0;x<26;x++)
		{
			if(z[x]==1)
			{
				b[k]=x+'a';
				y=1;
				k++;				
			}

		}
		if(y==0)printf("no\n");
		else
		{
			for(m=0;m<strlen(a[i]);m++)	
			{
				for(j=0;j<k;j++)
				{
					if(a[i][m]==b[j])
					{
						printf("%c\n",b[j]);
						f=1;
						break;
					}

			
				}
				if(f==1)break;
			}
		}


	}

	return 0;
}


