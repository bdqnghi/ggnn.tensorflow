  
 
void main()
{
	struct book
	{
		int number;
		char author[10];
	};
	struct book a[1000];
	int i,n,j,count[26]={0},temp,max,index=0;
	char c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    scanf("%d %s",&a[i].number,&a[i].author);
    for(i=0;i<n;i++)
		for(j=0;a[i].author[j]!='\0';j++)
		{	temp=(a[i].author[j])-'A';
		    count[temp]++;
		}
     max=count[0];
	 for(i=1;i<26;i++)
		 if(count[i]>max)
		 {max=count[i];
			 index=i;
		 }
    c=index+'A';
	printf("%c\n%d\n",c,max);
		 for(i=0;i<n;i++)
			 for(j=0;a[i].author[j]!='\0';j++)
				 if(a[i].author[j]==c)
					 printf("%d\n",a[i].number);
}
