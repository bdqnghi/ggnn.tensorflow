char a[10];
int huiwen(int k);//????????
int sushu(int k);//???????
char convert(int k);

void main()
{
	
	int m,n,k,mark=0,mark1,mark2;//mark????m?n????????
	
	scanf("%d%d",&m,&n);
	for(k=m;k<=n;k++)
	{
		mark1=huiwen(k);
		mark2=sushu(k);
		if(mark1&&mark2)
		{
			if(mark==0)
			{
				printf("%d",k);
				mark=1;
			}
			else printf(",%d",k);
		}
	}
	if(mark==0)printf("no\n");
}
int huiwen(int k)
{
	int i,j,len_a;
	convert(k);
	
	len_a=strlen(a);
	for(i=0,j=len_a-1;i<j;i++,j--)
		if(a[i]!=a[j])break;
	if(i<j)return(0);
	else return(1);
}
int sushu(int k)
{
	int i;
	for(i=2;i<k;i++)
		if(k%i==0)break;
	if(i==k)return(1);
	else return(0);
}
char convert(int k)
{
	int i=0;
	do
	{
		a[i]=k%10+'0';
		k=k/10;
		i++;
	}while(k/10!=0);
	a[i]=k+'0';
}



