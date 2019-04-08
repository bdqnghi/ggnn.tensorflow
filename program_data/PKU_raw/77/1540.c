struct result{
	int man;
	int woman;
}res[50]={0};
struct result temp;
int main()
{
	int i,j,p=-1,sum=0,len;
	char str[100]={0},std;
	gets(str);
	std=str[0];
	len=strlen(str);
	for(j=0;;j++){
		for(i=0;i<len;i++){
			if(str[i]==std&&str[i]!=str[i+1+j*2]&&str[i]!='\0'&&str[i+1+j*2]!='\0'){
				p++;
				res[p].man=i;
				res[p].woman=i+1+j*2;
				str[i]='\0';
				str[i+1+j*2]='\0';
				sum++;
			}
			else continue;
		}
		if(sum==len/2) break;
	}
	for(i=1;i<p+1;i++){
		for(j=0;j<p+1-i;j++){
			if(res[j].woman>res[j+1].woman){
				temp=res[j];
				res[j]=res[j+1];
				res[j+1]=temp;
			}
		}
	}
	for(i=0;i<=p;i++){
		printf("%d %d\n",res[i].man,res[i].woman);
	}
	return 0;
}
