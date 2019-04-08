int main(int argc, char* argv[])
{
	int w,a[12]={13,44,72,103,133,164,194,225,256,286,317,347},i;
	scanf("%d",&w);
	for(i=0;i<12;i++){
		if(w==7&&a[i]%7+w-8==5)
			printf("%d\n",i+1);
		else if(w!=7&&a[i]%7+w-1==5)
			printf("%d\n",i+1);}
	return 0;
}
