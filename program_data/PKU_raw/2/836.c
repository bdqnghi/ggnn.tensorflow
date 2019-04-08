struct book
{
	int code;
	char writer[10];
};
void main()
{
	int n,i,j,t=0,d,ww[27]={0};
	char max,w[27];
	struct book list[999];
	scanf("%d",&n);
	for(i=0;i<26;i++)w[i]=i+65;
	for(i=0;i<n;i++)
		scanf("%d %s",&list[i].code,list[i].writer);
   for(i=0;i<n;i++)
	   for(j=0;list[i].writer[j]!='\0';j++)
       {
		   for(d=0;d<26;d++)
			   if(list[i].writer[j]==w[d])ww[d]++;
	   }	   
	   max=ww[0];
	for(i=0;i<26;i++)
	if(ww[i]>max)
	{
		max=ww[i];
		t=i;
	}
	printf("%c\n%d\n",w[t],ww[t]);

for(i=0;i<n;i++)
	   for(j=0;list[i].writer[j]!='\0';j++)
       {
		   
			   if(list[i].writer[j]==w[t])printf("%d\n",list[i].code);
	   }	   
}