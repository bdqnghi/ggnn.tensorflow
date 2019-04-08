int main()
{
	int n,m,i,j;
	char s[2020][20],b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0,m=0;i<n;i++,m++){
		for(j=0;s[i][j]!='\0';j++){
			if(s[i][j]<=57&&s[i][j]>=48||s[i][j]<=90&&s[i][j]>=65||s[i][j]==95||s[i][j]<=122&&s[i][j]>=97){
				if(s[i][0]<=90&&s[i][0]>=65||s[i][0]<=122&&s[i][0]>=97||s[i][0]==95){
				b[m]=0;}
				else
				{
					b[m]=1;
					break;
				}
			}
			else
			{
				b[m]=1;
				break;}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]==1){
			printf("no\n");
		}
		if(b[i]==0)
		{
			printf("yes\n");
		}
	}
		return 0;
}
