main()
{char a[300];
int cishu[2][26],i,j,k=0,n,sum;
gets(a);
n=strlen(a);
for(j='a';j<='z';j++)
	{sum=0;
	cishu[0][k]=j;
	for(i=0;i<n;i++)
		if(a[i]==j)sum++;
	cishu[1][k]=sum;	
	k++;
	}
for(k=0;k<26;k++)
	if(cishu[1][k]!=0)break;
if(k==26&&cishu[1][25]==0) printf("No");
for(k=0;k<26;k++)
	{if(cishu[1][k]==0)continue;
     printf("%c=%d\n",cishu[0][k],cishu[1][k]);
	}
}
