struct
{char a[200];
char b[200];
int as[200];
int bs[200];
int ad;
int bd;
}num[200];
void main()
{
	int n,i,j,x,y,z[200][200],h=0,k,t;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%s\n%s\n\n",&num[i].a,num[i].b);
		num[i].ad=strlen(num[i].a);num[i].bd=strlen(num[i].b);
	}
	scanf("%s\n%s",&num[n-1].a,&num[n-1].b);
	num[n-1].ad=strlen(num[n-1].a);num[n-1].bd=strlen(num[n-1].b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<num[i].ad;j++)
			num[i].as[j]=num[i].a[j]-48;
		for(k=0;k<num[i].bd;k++)
			num[i].bs[k]=num[i].b[k]-48;
	}
	for(i=0;i<n;i++)
	{
		h=0;
		for(j=num[i].ad-1,k=num[i].bd-1;k>=0;k--,j--)
		{
			if(num[i].as[j]-num[i].bs[k]<0)
			{
				z[i][h]=num[i].as[j]-num[i].bs[k]+10;
				num[i].as[j-1]=num[i].as[j-1]-1;h=h+1;
			}
			if(num[i].as[j]-num[i].bs[k]>=0)
			{
				z[i][h]=num[i].as[j]-num[i].bs[k];
				h=h+1;
			}
		}
			for(;j>=0;j--)
			{
				if(num[i].as[j]>=0)
				{
					z[i][h]=num[i].as[j];
					h=h+1;
				}
				if(num[i].as[j]<0)
				{
					z[i][h]=num[i].as[j]+10;
					num[i].as[j-1]=num[i].as[j-1]-1;
					h=h+1;
				}
			}
		for(t=num[i].ad-1;t>=0;t--)
			printf("%d",z[i][t]);
		printf("\n");
	}
}