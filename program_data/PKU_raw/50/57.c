int main(int argc, char* argv[])
{
	int a[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<12;i++){
		if((a[i]-1+n)%7==5)
			printf("%d\n",i+1);
	}
	
	
	return 0;
}

