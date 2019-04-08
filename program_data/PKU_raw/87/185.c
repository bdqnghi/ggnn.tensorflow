int main()
{
	int a,b,c,d,e,f,i;
	int s[10000];
	int k=0;
	int n=0;
	for(i=0;;i++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		s[k]=(d+12-a)*3600+(e-b)*60+f-c;
		k++;
		n=k;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
	}
	for(k=0;k<(n-1);k++){
		printf("%d\n",s[k]);
	}
		
	return 0;
}