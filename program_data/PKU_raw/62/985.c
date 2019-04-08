int main(){
    int i,m;
	char zfc[1000],ans[1000],*p1,*p2;
     gets(zfc);
     p1=zfc;
     p2=ans;
	 m=0;
    for(i = 0; *(p1+i)!='\0'; i++){
		if(*(p1+i)!=' '){
			*(p2+m)=*(p1+i);
			m++;
		}else if(*(p1+i)==' '&&*(p1+i+1)!=' '){
			*(p2+m)=*(p1+i);
			m++;
		}else{
			continue;
		}
	}
    *(p2+m)='\0';
			cout<<p2;
    return 0;
}
