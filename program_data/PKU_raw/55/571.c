const long maxL=100;

long a,b;
char str[maxL+1];

long ans[maxL+1];

main(){
    long i,l,x;
    scanf("%ld%s%ld",&a,str,&b);
    l=strlen(str);
    x=0;
    for(i=0;i<l;i++){
	x*=a;
	if(str[i]>='0' && str[i]<='9')
	    x+=str[i]-'0';
	else if(str[i]>='a' && str[i]<='z')
	    x+=str[i]-'a'+10;
	else
	    x+=str[i]-'A'+10;
    }
    l=0;
    while(x>0){
	ans[l]=x%b;
	x/=b;
	l++;
    }
    if(l==0)ans[++l]=0;
    for(i=l-1;i>=0;i--){
	if(ans[i]<10)printf("%ld",ans[i]);
	else printf("%c",ans[i]-10+'A');
    }
    return 0;
}

