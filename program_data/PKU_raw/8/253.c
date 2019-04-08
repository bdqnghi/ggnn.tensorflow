int m,n,i,str[1000];
void get();
void sort();
int join();
void print();
void get ()
{
	scanf("%d %d",&m,&n);
	for(i=0;i<m+n;i++)
		scanf("%d",&str[i]);
}
void sort ()
{
	int i,j,temp;
	for(i=0;i<m;i++)
	{for(j=i+1;j<m;j++)
	if(str[j]<str[i]){temp=str[i];str[i]=str[j];str[j]=temp;}}
	for(i=m;i<m+n;i++)
	{for(j=i+1;j<m+n;j++)
	if(str[j]<str[i]){temp=str[i];str[i]=str[j];str[j]=temp;}}
}
int join ()
{return 0;}
void print ()
{printf("%d",str[0]);
for(i=1;i<m+n;i++)
printf(" %d",str[i]);
}
void main()
{get(str);
sort(str);
join(str);
print(str);}