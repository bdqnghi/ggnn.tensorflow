

int main()
{
	int n,i,j,k;
	int slotnum;
	char slot[100];
	scanf("%d",&n);

	char s1[100][100];
	int s2[100];
	char a1[100][100];
	int a2[100];
	int anum=0;
	char b1[100][100];
	int b2[100];
	int bnum=0;
	for(i=0,j=0,k=0;i<n;i++)
	{
		scanf("%s %d",s1[i],&s2[i]);
		if(s2[i]>=60)
		{
			strcpy(a1[j],s1[i]);
			a2[j]=s2[i];
			j++;
			anum++;
		}
		if(s2[i]<60)
		{
			strcpy(b1[k],s1[i]);
			b2[k]=s2[i];
			k++;
			bnum++;
		}
	}

	for(i=anum-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a2[j]<a2[j+1])
			{
				strcpy(slot,a1[j]);
				strcpy(a1[j],a1[j+1]);
				strcpy(a1[j+1],slot);
				slotnum=a2[j];
				a2[j]=a2[j+1];
				a2[j+1]=slotnum;
			}
		}
	}

	for(i=0;i<anum;i++)
	{
		printf("%s\n",a1[i]);
	}
	for(i=0;i<bnum;i++)
	{
		printf("%s\n",b1[i]);
	}

	return 0;
}