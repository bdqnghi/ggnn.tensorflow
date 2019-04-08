int zh(int,int);
int main(){
int i,j,p=0,a[300],b[300],n;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d %d",&a[i],&b[i]);}
for(i=0;i<n;i++){
	if((zh(a[0],b[0]))||(zh(a[i],b[i])&&zh(a[i-1],b[i-1])!=1)){
		j=i;
		while(zh(a[j],b[j])!=0){j++;}
		if(p<j-i){p=j-i;}
	}
}
printf("%d",p);
return 0;
}
int zh(int x,int y){
	if(x>=90&&x<=140&&y>=60&&y<=90){return 1;}
    else{return 0;}
}

