int main(){
	double rate;
	int x1,x2,y=0,i,flag=0;
	char a[500],b[500];
	scanf("%lf%s%s",&rate,a,b);
	x1=strlen(a);
	x2=strlen(b);
	for(i=0;i<x1;i++){
		if(a[i]!='A'&&a[i]!='C'&&a[i]!='T'&&a[i]!='G'){
			flag=1;
			break;
		}
	}
    for(i=0;i<x1;i++){
		if(b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G'){
			flag=1;
			break;
		}
	}
	if(flag==0&&x1==x2){
	    for(i=0;i<x1;i++){
		    if(a[i]==b[i]){
			    y++;
			}
		}
	    if((double)y/(double)x1>rate){
		    printf("yes");
		}else{
		    printf("no");
		}
	}else{
		printf("error");
	}
    return 0;
}