const long maxL=300;

long a,b;
char str[maxL+10];

long from[maxL+10],to[maxL+10];

long ans[maxL+10];

main(){
    long i,j,k,L,x;
    scanf("%ld%s%ld",&a,str,&b);
    L=strlen(str);
    for(i='0';i<='9';i++){
	from[i]=i-'0';
	to[i-'0']=i;
    }
    for(i='a';i<='z';i++)from[i]=i-'a'+10;
    for(i='A';i<='Z';i++){
	from[i]=i-'A'+10;
	to[i-'A'+10]=i;
    }
    x=0;
    for(i=0;i<L;i++){
	x*=a;
	x+=from[str[i]];
    }
    L=0;
    while(x){
	ans[++L]=x%b;
	x/=b;
    }
    if(L==0)ans[++L]=0;
    for(i=L;i>=1;i--){
	printf("%c",to[ans[i]]);
    }
    printf("\n");
    return 0;
}
