int main(){
	int n,i,j,b,a;
	char s[1000],s1[1000],s2[1000];
	char *ps1=s1,*ps2=s2;
	gets(s2);
	gets(s1);
	gets(s);
	int l1=strlen(s1);
	int l2=strlen(s2);
	for(a=0,b=0;a<l2&&b==0;a=i+1){
	    for(i=a,ps1=s1,ps2=s2+a;*ps1!=*ps2&&*ps1!='\0'&&*ps2!='\0';ps2++,i++);
	    for(j=0,b=1;*ps1!='\0'&&*ps2!='\0';ps1++,ps2++,j++){
			if(*ps1!=*ps2&&j<l1){
			    b=0; 
				break;
			}
		}
		
	}
	if(i==l2)
		printf("%s",s2);
	else{
		n=i;
	    s2[n]='\0';
	    printf("%s",s2);
	    printf("%s",s);
	    ps2=s2+n+l1;
	    printf("%s",ps2);
	}
	return 0;
}
