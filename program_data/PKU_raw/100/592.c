int main(int argc, char* argv[])
{
	int a,n,s,i,j;
	char str[300];
	scanf("%s",str);
	a=0;
	n=(int)strlen(str);
	for(i=97;i<123;i++){
		s=0;
		
		for(j=0;j<n;j++){
			if(str[j]==i){
				a=1;
				s++;
			}
		}
		if(s!=0){
			printf("%c=%d\n",(char)i,s);
		}
		

		
	}
	if(a==0){
			printf("No\n");
		
	}
	return 0;
}

