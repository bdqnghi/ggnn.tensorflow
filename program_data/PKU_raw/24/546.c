int main()
{
	char s[1000],p[20],p1[20],q[20],q1[20];
	gets(s);
	int i,j,len,count=0,t=0,n=0,x=1,max=0,min=0,y=0;
	strcat(s," ");
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]==' '){
			x=0;
		}
		if(x==0){
			x=1;
			n++;
		}
	}
	for(j=0;j<n;j++){
		for(i=t;i<len;i++){
			if(s[i]!=' '){
				p[i-t]=s[i];
			}
			else{
				s[i]='\0';
				p[i-t]='\0';
				strcpy(q,p);
				t=i+1;
				break;
			}
		}
		if(y==0){
			strcpy(p1,p);
			strcpy(q1,p1);
			y=1;
		}
		if(strlen(p)>strlen(p1)){
			strcpy(p1,p);
		}
		if(strlen(q)<strlen(q1)){
			strcpy(q1,q);
		}
	}
	
	printf("%s\n%s",p1,q1);
	return 0;
}





	




