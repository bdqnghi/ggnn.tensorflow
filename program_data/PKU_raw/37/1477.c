int main()
{
	int a=0,b,v,d,n,max,nn,mm=0,ii,c,e,f,i,j,t[100];
	char cc;
	scanf("%d",&nn);
	scanf("%c",&cc);
	for(ii=1;ii<=nn;ii++){
		int y[1000]={0};
char x[1000];
	gets(x);
	e=strlen(x);
		for(i=0;i<=e-1;i++){
			for(j=0;j<=e-1;j++){
				if(x[i]==x[j])y[i]++;}
			if(y[i]==1){printf("%c\n",x[i]);
			break;
			}
		}
		if(i==e)printf("no\n");
	
	}	
}