char str[100000];
int main(int argc, char* argv[])
{

	int a[300];
	int i,len;
	gets(str);
	len=strlen(str);

	int word=0,num=0,total=0;
	for(i=0;i<len;){
		while(str[i]!=' '&&i<len){
	num++;
	i++;
	word=1;
		}
		if(word==1){
		total++;
		a[total-1]=num;
		}
		num=0;
		i++;
		word=0;

	}
	for(i=0;i<total-1;i++){
	printf("%d,",a[i]);
	}
	printf("%d\n",a[total-1]);
	return 0;
}

