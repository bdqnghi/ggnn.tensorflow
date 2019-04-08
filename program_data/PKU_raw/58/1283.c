int main()
{
	int panduan(char *z,int len);
	int i,n,len;
	char zifu[82],*z=zifu;
	gets(zifu);
	n=atoi(zifu);
	for(i=0;i<n;i++){
		gets(zifu);
		len=strlen(zifu);
		printf("%d\n",panduan(z,len));
	}
	return 0;
}
int panduan(char *z,int len)
{
	int i;
	for(i=0;i<len;i++){
		if(i==0){
			if(*z!='_'&&(*z>'z'||*z<'a')&&(*z>'Z'||*z<'A'))
				return 0;
		}
		else{
			if(*(z+i)!='_'&&(*(z+i)>'z'||*(z+i)<'a')&&(*(z+i)>'Z'||*(z+i)<'A')&&(*(z+i)>'9'||*(z+i)<'0'))
				return 0;
		}
	}
	return 1;
}