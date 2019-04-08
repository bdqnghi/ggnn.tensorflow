int main()
{
	int i,j,k,t;
	char str[500]={"1"};
	gets(str);
	for(k=1;k<strlen(str)-1;k++)
	    for(i=0;i<strlen(str)-k;i++){
			t=0;
			for(j=0;j<(k+1)/2;j++){
				if(str[i+j]!=str[i+k-j]){t=1;break;}
			}
			if(t==0){
				for(j=i;j<=i+k;j++)
					printf("%c",str[j]);
				printf("\n");
			}
		}
	return 0;
}