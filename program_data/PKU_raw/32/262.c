void minus(char p[110],char a[110])
{
	int m,n,i,j;
	m=strlen(p);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
    {
		if(p[m-n+i]>=a[i]) p[m-n+i]=p[m-n+i]-a[i]+48;
		else
		{
			for(j=m-n+i-1;j>=0;j--)
			{
				if(p[j]==48) p[j]=57;
				else 
				{
					p[j]-=1;
					break;
				}
			}
			p[m-n+i]=p[m-n+i]-a[i]+58;
		}
	}
	for(i=0;i<m;i++) if(p[i]!=48)break;
	for(j=0;j<m-i;j++) p[j]=p[j+i];	
}

void main()
{
	int n,i;
	char pass[110],act[110],res[100][110];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",pass,act);
		minus(pass,act);
		strcpy(res[i],pass);
	}
	for(i=0;i<n;i++) printf("%s\n",res[i]);
}

