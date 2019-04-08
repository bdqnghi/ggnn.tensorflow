int main(int argc, char* argv[])
{
   int n,bei1[100],jian1[100],cha[100];
   int j,a,b,i;
   char bei[100],jian[100];
   scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%s",bei);
		scanf("%s",jian);
		a=strlen(bei);
		b=strlen(jian);
		for(i=0;i<a;i++)
		{
			bei1[i]=bei[i]-'0';
		}
		for(i=0;i<b;i++)
		{
			jian1[i]=jian[i]-'0';
		}
		for(i=b-1;i>=0;i--)
		{
			jian1[a-b+i]=jian1[i];
		}	
		for(i=0;i<(a-b);i++)
		{
			jian1[i]=0;
		}
		for(i=a-1;i>=0;i--)
		{
			if(bei1[i]>=jian1[i])
			{
				cha[i]=bei1[i]-jian1[i];
			}
			if(bei1[i]<jian1[i])
			{
				cha[i]=bei1[i]+10-jian1[i];
				bei1[i-1]=bei1[i-1]-1;
			}
		}
		if(cha[0]==0) 
		{
			for(i=1;i<a;i++)
			{
			printf("%d",cha[i]);
			}
			printf("\n");
		}
		else
		for(i=0;i<a;i++) printf("%d",cha[i]);
		printf("\n");
		
	}	

   return 0;
}
