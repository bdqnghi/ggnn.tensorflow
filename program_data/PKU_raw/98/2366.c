int main(){
int n,i,len,end=0;
char c[max+1];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",c);
len=strlen(c);
if(i==0){
printf("%s",c);
end+=len;
}
else{
	if(len+end+1>line){
printf("\n");
printf("%s",c);
end=len;
	}
else{
	printf(" ");
printf("%s",c); 
end+=len+1;
}
}
}
return 0;
}