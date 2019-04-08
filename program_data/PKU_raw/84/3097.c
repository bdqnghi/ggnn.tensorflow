int main(int argc, char* argv[])
{
	int e,len;
	scanf("%d",&len);
	int num[100];
	for(int i=0;i<len;i++)
		scanf("%d",&(num[i]));
	for(int k=1;k<len;k++){
		for(int i=0;i<len-k;i++){
			if(num[i]<num[i+1]){
				e=num[i+1];
				num[i+1]=num[i];
				num[i]=e;
			}
		}
	}
	printf("%d\n%d\n",num[0],num[1]);
	return 0;
}
