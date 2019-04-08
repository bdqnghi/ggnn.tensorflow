int main ()
{
	double n,c;
	int a,i,d=1,b=0;
	char sz[1000]={'\0'},u[1000]={'\0'};
	scanf("%lf",&n);
	scanf("\n");
	gets(sz);

	gets(u);
	a=strlen(sz);
	for(i=0;i<a;i++){
		if(sz[i]!='A'&&sz[i]!='G'&&sz[i]!='T'&&sz[i]!='C'){
			printf("error");
			d=0;
			break;
		}
		else if(u[i]!='A'&&u[i]!='G'&&u[i]!='T'&&u[i]!='C'){
			printf("error");
			d=0;
			break;
		}

	 else if(sz[i]==u[i]){
			b++;
		}

	}
	c=b*1.0/a;
	if(d==1){
	   if(c>n){
		  printf("yes");
	   }
	   else{
		printf("no");
	   }
	}



	return 0;
}
