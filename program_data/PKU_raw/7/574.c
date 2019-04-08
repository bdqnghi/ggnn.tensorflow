int main(){
    char a[50];
	char b[256];
	char news[50];
	int i,c,wz=500,x=0,d=0;
	char st[100],en[100];

    scanf("%s",b);
	   
	scanf("%s",a);
	scanf("%s",news);
   
	for(i=0;i<strlen(b);i++){
		x=0;
		if(a[0]==b[i]){
			for(c=i+1;c<strlen(a)+i;c++){
				if(a[c-i]==b[c]){
				    x++;
					
				}
			}
			if(x==strlen(a)-1){
				    wz=i;
					break;
					
				
			}
		}
	}

 if(wz!=500){
		for(i=0;i<wz;i++){
		    st[i]=b[i];
		}
		st[i]='\0';

		for(i=wz+strlen(a);i<strlen(b);i++){
			en[i-wz-strlen(a)]=b[i];    
		}
		en[i-wz-strlen(a)]='\0';
		strcat(st,news);	   
		strcat(st,en);
		puts(st);
	
	}	
else if(wz==500){

	puts(b);
}
	return 0;
}

