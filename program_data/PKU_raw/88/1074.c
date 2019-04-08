int main(){
int i,j;
j=0;
char zfc[31],jg[31];
gets(zfc);
for(i=0;zfc[i]!=0;i++){
	if(zfc[i]>='0'&&zfc[i]<='9'){
		jg[j]=zfc[i];
		if(zfc[i+1]>='0'&&zfc[i+1]<='9'){
			j++;
			continue;
		}else{
			jg[j+1]=0;
			puts(jg);
			j=0;
		}
	}
}
    return 0;
}


