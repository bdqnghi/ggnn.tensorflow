void main()
{
	char a[510],mark[6];
	struct cc{
		char w[6];
		int num;
	}b[500];
	int n,i,j,flag=0,len,q=0,max=0,sum=0;
	scanf("%d %s",&n,a);
	len=strlen(a);
	for(i=0;i<=len-n;i++){
		for(j=0;j<n;j++){
			mark[j]=a[j+i];
		}
		mark[j]=0;
		if(q==0){
			strcpy(b[0].w,mark);
			q++;
			b[0].num=1;
		}
		else{
			for(j=0;j<q;j++){
				if(strcmp(mark,b[j].w)==0){
					b[j].num++;
					break;
				}
			}
			if(j==q){
				strcpy(b[q].w,mark);
				b[q].num=1;
				q++;
			}
		}
	}
	for(i=0;i<q;i++){
		if(b[i].num>max){
			max=b[i].num;
		}
	}
	if(max==1)printf("NO\n");
	else{
	printf("%d\n",max);
	for(i=0;i<q;i++){
		if(b[i].num==max){
			printf("%s\n",b[i].w);
		}
	}
}}