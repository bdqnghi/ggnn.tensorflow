
int main()
{
	int m;
	struct bo
	{int a;
	char au[36];
	};
	struct bo bo[999];
	int i,j;
	char k,K;
	int sb[26]={0},sbt;
	int len;
	int n;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %s",&bo[i].a,bo[i].au);
		len=strlen(bo[i].au);
		for(j=0;j<len;j++){
			for(k=65;k<91;k++){
				if(bo[i].au[j]==k){
					sb[k-65]++;
				}
			}
		}
	}
	K=0;
	sbt=0;
	for(i=0;i<26;i++){
		if(sb[i]>sbt){
			K=i+65;
			sbt=sb[i];
		}
	}
	printf("%c\n%d\n",K,sbt);
	for(i=0;i<m;i++){
		n=1;
		for(j=0;j<strlen(bo[i].au);j++){
			if(K==bo[i].au[j]){
				n=0;
			}
		}
		if(n==0){
			printf("%d\n",bo[i].a);
		}
	}
	


}