int main()
{
	int m, n, c[100000]={0};
	int i, e, j, t, flag=0;
	char a[100000];
	scanf("%d %d", &m, &n);
    for(i=m;i<=n;i++){
		for(e=2;e<i;e++){
			if(i%e==0){
				c[i]=-1;
				break;
			}
		}
		if(c[i]==0){
			sprintf(a ,"%d", i);
			t=strlen(a);
			for(j=0;j<t;j++){
				if(a[j]!=a[t-j-1]){
					c[i]=1;
					break;
				}
			}
		}
	}
	for(i=m;i<=n;i++){
		if(c[i]==0&&flag==0){
			printf("%d", i);
			flag=1;
		}
		else if(c[i]==0&&flag==1){
			printf(",%d", i);
		}
	}
	if(flag==0){
		printf("no");
	}
	printf("\n");
	return 0;
}