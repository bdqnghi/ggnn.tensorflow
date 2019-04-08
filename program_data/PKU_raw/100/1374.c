int main(){
char zfc[300],k;
scanf("%s",zfc);
int L;
L=strlen(zfc);
int i,a,p;
for(i=97;i<=122;i++){
	a=0;
	for(p=0;p<L;p++){
		if(zfc[p]==i){
		a++;
		}
	}
    if(a!=0){
	k=i;
	printf("%c=%d\n",k,a);
	}
}
int o=0;
for(p=0;p<L;p++){
	if(zfc[p]<97||zfc[p]>122){
	o++;
	}
}if(o==L){
printf("No");
}
return 0;
}