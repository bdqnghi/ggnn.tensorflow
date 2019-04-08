
int len1,len2;
int *sz1,*sz2;

void read()
{
	int i;
	scanf("%d%d",&len1,&len2);
	sz1=(int *)malloc(LEN*(len1+len2));
	sz2=(int *)malloc(LEN*len2);
	
	for(i=0;i<len1;i++)
		scanf("%d",sz1+i);
	for(i=0;i<len2;i++)
		scanf("%d",sz2+i);
}
void sort()
{
	int i,j,temp;
	
	for(i=0;i<len1;i++){
		for(j=i+1;j<len1;j++)
			if(sz1[i]>sz1[j]){
				temp=sz1[i];
				sz1[i]=sz1[j];
				sz1[j]=temp;
			}
	}
	for(i=0;i<len2;i++){
		for(j=i+1;j<len2;j++)
			if(sz2[i]>sz2[j]){
				temp=sz2[i];
				sz2[i]=sz2[j];
				sz2[j]=temp;
			}
	}
}
void combine()
{
	int i;
	for(i=0;i<len2;i++){
		sz1[len1+i]=sz2[i];
	}
}
void print()
{
	int i;
	printf("%d",sz1[0]);
	for(i=1;i<len1+len2;i++){
		printf(" %d",sz1[i]);
	}
	printf("\n");
}

void main()
{
	read();
	sort();
	combine();
	print();
}
