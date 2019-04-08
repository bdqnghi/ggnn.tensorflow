
int main(int argc, char* argv[])
{
	char a[250],b[250];
	int c[250]={0};
	int i,j=0,d,s,n1,n2,max,pan=0;
	scanf("%s%s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1>n2){
		max=n1;
		d=n1-n2;
		for(i=n1-1;i-d>=0;i--){
			s=a[i]+b[i-d]-'0'-'0';
			if(s+j>9){
				c[i]=s-10+j;
				j=1;
			}
			else{
				c[i]=s+j;
				j=0;
			}
		}
		for(i=d-1;i>=0;i--){
			s=a[i]+j-'0';
			if(s>9){
				c[i]=s-10;
				j=1;
			}
			else{
				c[i]=s;
				j=0;
			}
		}
	}
	else{
		max=n2;
		d=n2-n1;
		for(i=n2-1;i-d>=0;i--){
			s=b[i]+a[i-d]-'0'-'0';
			if(s+j>9){
				c[i]=s-10+j;
				j=1;
			}
			else{
				c[i]=s+j;
				j=0;
			}
		}
		for(i=d-1;i>=0;i--){
			s=b[i]+j-'0';
			if(s>9){
				c[i]=s-10;
				j=1;
			}
			else{
				c[i]=s;
				j=0;
			}
		}
	}
    if(j==1){
		printf("1");
	}
	for(i=0;i<max;i++){
		if(c[i]!=0)
			pan=1;
		if(pan==1||(pan==0&&j==1))
			printf("%d",c[i]);
	}
	if(pan==0&&j==0)
		printf("0");
	return 0;
}

