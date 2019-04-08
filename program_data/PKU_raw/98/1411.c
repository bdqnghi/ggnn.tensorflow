int main()
{
	int i=0,j,begin,end;
	char a[10000],b[10];
	gets(b);
	gets(a);
	while(a[i]){
		begin=i;
		for(j=0;j<80&&a[i];j++)
			i++;
		if(a[i]==0){
			end=i-1;
			i--;
		}
		else{
			while(a[i]!=' ')
					i--;
			end=i-1;
		}
		while(begin<=end){
			printf("%c",a[begin]);
			begin++;
		}
		printf("\n");
		i++;
	}
	return 0;
}