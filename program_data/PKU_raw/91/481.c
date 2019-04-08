
int main(){
	int n,i,j,k,l;
	char as[110],bs[110];
	gets(as);
	int len=strlen(as);
	for(i=0;i<len-1;i++)
	{
		bs[i]=as[i]+as[i+1];
	}
	bs[len-1]=as[0]+as[len-1];
	bs[len]=0;
	printf("%s",bs);
	return 0;
}