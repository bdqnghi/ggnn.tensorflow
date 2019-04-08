int main()
{
	void maopao(int n,int a[]);
	int shuzu1[500],shuzu2[500];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&(shuzu1[i]));
	for(i=j=0;i<n;i++)
		if(shuzu1[i]%2==1){
			shuzu2[j]=shuzu1[i];
			j++;
		}
	maopao(j,shuzu2);
	for(i=0;i<j-1;i++)
		printf("%d,",shuzu2[i]);
	printf("%d\n",shuzu2[j-1]);
	return 0;
}

void maopao(int n,int a[]){
	int i,j,temp;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}