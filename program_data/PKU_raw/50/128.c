int main(int argc, char* argv[])
{
	int a,i,n;
	int b[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	scanf("%d",&n);
	if(n==5)a=1;
	if(n==6)a=0;
	if(n==7)a=6;
	else a=6-n;
	for(i=0;i<12;i++){
	    if(b[i]%7==a)printf("%d\n",i+1);
	}
	return 0;
}