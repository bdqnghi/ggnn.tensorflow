
int main(){
char s[102],a[102],b[102];
char temp[102]={0};
unsigned int i,j;
unsigned int sum=0;
unsigned int sum1=0;
int flag=0;
gets(s);
gets(a);
gets(b);


for(i=0;i<strlen(s);i++){
	
	if(s[i]!=' '){
	 sum1=sum1+1;
	 if(i!=strlen(s)-1)continue;
	 else {i=i+1;flag=1;}
	 
	}
	for(j=0;j<strlen(a)&&strlen(a)==sum1;j++){
		if(s[i-sum1+j]==a[j])sum=sum+1;
	}
	if(sum==strlen(a)){
       for(j=0;j<strlen(b);j++){
		printf("%c",b[j]);
	   }
	}
	else{
    for(j=0;j<sum1;j++){
		printf("%c",s[i-sum1+j]);
	}
	}
	if(flag==0)printf("%c",' ');
	sum1=0;
	sum=0;
		
}
    
return 0;
}
	
