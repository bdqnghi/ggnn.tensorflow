int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	char id[100][10];
	int age[100];
	char oid[100][10];
	int oage[100];
	for(i=0;i<n;i++)
	{
		scanf("%s",id[i]);
		scanf("%d",&age[i]);
	}
         int k=0;
	for(i=0;i<n;i++)
	{
		if(age[i]>=60)
		{
				oage[k]=age[i];
				strcpy(oid[k],id[i]);k++;
		}
	}	
	for(i=1;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
                        if(oage[j]<oage[j+1])
			{
				int e;
				e=oage[j];
				oage[j]=oage[j+1];
				oage[j+1]=e;
				char f[10];
				strcpy(f,oid[j]);
				strcpy(oid[j],oid[j+1]);
				strcpy(oid[j+1],f);
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%s\n",oid[i]);
	}
	for(i=0;i<n;i++)
	{
		if(age[i]<60)printf("%s\n",id[i]);
	}
	return 0;
}

