int main()
{
	int jiaohuan(int (*s)[5],int n,int m);
	int i,j,n,m,shuzu[5][5],(*s)[5]=shuzu;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			scanf("%d",&*(*(s+i)+j));
	}
	scanf("%d%d",&n,&m);
	if(jiaohuan(s,n,m)==0)
		printf("error");
	else{
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(j==0)
					printf("%d",*(*(s+i)+j));
				else
					printf(" %d",*(*(s+i)+j));
			}
			printf("\n");
		}
	}
	return 0;
}
int jiaohuan(int (*s)[5],int n,int m)
{
	int i,temp;
	if(n>=0&&n<5&&m>=0&&m<5){
		for(i=0;i<5;i++){
			temp=*(*(s+n)+i);
			*(*(s+n)+i)=*(*(s+m)+i);
			*(*(s+m)+i)=temp;
		}
		return 1;
	}
	else
		return 0;
}