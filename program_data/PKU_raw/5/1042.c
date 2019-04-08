int main(){
	int n=0,i,l;
	double k;
	char a[500],b[500];
    scanf("%lf",&k);
	scanf("%s\n%s",&a,&b);
    if(strlen(a)!=strlen(b)){printf("error");}
	else{l=strlen(a);
		for(i=0;i<l;i++){
			if(!(a[i]==65||a[i]==67||a[i]==71||a[i]==84)||!(b[i]==65||b[i]==67||b[i]==71||b[i]==84)){
				printf("error");break;
			}else{
                if(a[i]==b[i]){n=n+1;}
				if(i==l-1){
					if(1.0*n/l>=k){printf("yes");}else{printf("no");}
				}
			}
		}
	}
	return 0;
}