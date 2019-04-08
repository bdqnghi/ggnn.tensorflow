int main(){
 int i,n,pd,j;
 char zc[50];
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%s",zc);
  for(j=0;j<strlen(zc);j++){
	  if(zc[0]>47&&zc[0]<58){
	   pd=0;
       break;
	
  }
	
  if((zc[j]>47&&zc[j]<58)||(zc[j]>64&&zc[j]<91)||(zc[j]>96&&zc[j]<123)||(zc[j]==95)){
	
  pd=1;
	
  }else{
	
  pd=0;
	
  break;
	
  }
  }if(pd==1){
 printf("yes\n");
  }else if(pd==0){
printf("no\n");
  }

 }
 return 0;
}