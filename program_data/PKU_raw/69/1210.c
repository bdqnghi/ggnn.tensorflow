
int main()
{
	char s1[251] = {0};
	char s2[251] = {0};
	gets(s1);
	gets(s2);
	int l1,l2;
	int zeroPrefix = 0;
	l1=strlen(s1);
	l2=strlen(s2);

    int i;
	char *p1;
	char *p2;
	int max,min;
	char longer[251]={0};
	char shorter[251]={0};
	if(l1>=l2){
		strcpy(longer,s1);
		strcpy(shorter,s2);
		max=l1;
		min=l2;
	}else{
		strcpy(longer,s2);
		strcpy(shorter,s1);
		max=l2;
		min=l1;
	}
	p1=longer+max-1;
	p2=shorter+min-1;


	int t;
	t=0;

	if(max!=min){
	    for(i=0;i<min;i++,p1--,p2--){

				if((*p1+*p2-'0')<='9'){
					*p1=*p1+*p2-'0';
				}else{
					*p1=*p1+*p2-':';
					*(p1-1)=*(p1-1)+1;
				}

		}
		for(i=min;i<max;i++,p1--){
			if(i!=(max-1)){
			    if(*p1<='9'){
					break;

				}else{
					*(p1-1)=*(p1-1)+1;
					*p1='0';

				}
			}else{
				if(*p1<='9'){
					break;

				}else{
					t=1;
					*p1='0';


				}
			}
		}
		if(t==1){
			printf("1");
			puts(longer);
		}else{
			for(i=0;i<max;i++){
				if(longer[i]!='0' || zeroPrefix == 1){

				    zeroPrefix = 1;
					printf("%c",longer[i]);
				}
			}
			if(zeroPrefix == 0)
			printf("0");

		}
	}else{
		for(i=0;i<max;i++,p1--,p2--){
			if(i!=(max-1)){
				if((*p1+*p2-'0')<='9'){
					*p1=*p1+*p2-'0';
				}else{
					*p1=*p1+*p2-':';
					*(p1-1)=*(p1-1)+'1'-'0';
				}
			}else{
				if(*p1+*p2-'0'<='9'){
					*p1=*p1+*p2-'0';
				}else{
					t=1;
					*p1=*p1+*p2-':';

				}
			}
		}
		if(t==1){
			printf("1");
			puts(longer);
		}else{
			for(i=0;i<strlen(longer);i++){
				if(longer[i]!='0' || zeroPrefix == 1){
				    zeroPrefix = 1;
					printf("%c",longer[i]);
				}
			}
			if(zeroPrefix == 0)
			printf("0");

		}
	}


	return 0;
}
