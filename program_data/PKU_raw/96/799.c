int main(){
char cs[102];
int ys=0,c=0,s;
gets(cs);
for  (int i=0;i<strlen(cs);i++){
     c=10*ys+(int)(cs[i]-'0');
     ys=c%13;
     s=c/13;
    if (s!=0){
	   printf("%d",s);
	}
	else {
		if (i==0){
			if(strlen(cs)==1){
			printf("%d",s);
			}
			else {
			 continue;
			}
		}
	    else if (i==1){
		   if  (strlen(cs)>2){
			continue ;
			}
		    else {
			 printf("%d",s);
			}
		}
	   else {
		 printf("%d",s);
		} 
	}
	 if (i==strlen(cs)-1){
	   printf("\n");
	   printf("%d",ys);
	}
}
return 0;
}