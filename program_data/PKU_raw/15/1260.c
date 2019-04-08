int main()
{
	int p[row][row];
	int n,word,i,j;
	int a,b,c,d,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&p[i][j]);
		}
	}
	word=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(word==0){
				if(p[i][j]==0){
					a=i;
					b=j;
					word=1;
				}
			}
		}
	}
	word=0;
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(word==0){
				if(p[i][j]==0){
					c=i;
					d=j;
					word=1;
				}
			}
		}
	}
	s=(c-a-1)*(d-b-1);
	printf("%d",s);
	return  0;
}


