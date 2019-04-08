int main()
{
	int m,len[1000],sum[26]={0},max,i,j,i0;
	scanf("%d",&m);
	struct book{
		int num;
		char wri[27];
	}book[1000];
	for(i=0;i<m;i++){
		scanf("%d %s",&book[i].num,book[i].wri);
		len[i]=strlen(book[i].wri);
	}
	for(i=0;i<m;i++)
		for(j=0;j<len[i];j++)
			sum[book[i].wri[j]-65]++;
	max=sum[0];
	i0=0;
	for(i=1;i<26;i++)
		if(sum[i]>max){
			max=sum[i];
			i0=i;
		}
	printf("%c\n",i0+65);
	printf("%d\n",max);
	for(i=0;i<m;i++)
		for(j=0;j<len[i];j++)
			if(book[i].wri[j]==65+i0){
				printf("%d\n",book[i].num);
				break;
			}
	return 0;
}