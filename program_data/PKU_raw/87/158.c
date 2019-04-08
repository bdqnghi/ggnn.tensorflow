int main(){
	int a,b,c,d,e,f;
	int i,l=0;
	for(i=0;i<1000;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&e==0&&f==0){
			break;
		}else{
		    d=d+12;
		    if(f<c){
			    l=f+60-c;
			    e=e-1;
			}else if(f>=c){
			    l=f-c;
			}
		    if(e<b){
			    l+=(e+60-b)*60;
				d=d-1;
			}else if(e>=b){
			    l+=(e-b)*60;
			}
		        l+=(d-a)*3600;
		        printf("%d\n",l);
		}
	}
	return 0;
}
