void main(){
	char s[256]={0},subS[256]={0},re[256]={0},t,s1[256]={0};
int i,j,l1,l2,l3,count,yes;
scanf("%s\0",s);
scanf("%s\0",subS);
scanf("%s\0",re);
l1=strlen(s);
l2=strlen(subS);
l3=strlen(re);
yes=0;
strcpy(s1,s);
for(i=0;i<=l1-l2;i++){
	count=0;
	for(j=0;j<l2;j++){
	   if(subS[j]!=s[i+j]) break;
	   if(subS[j]==s[i+j]) count++;
	}
	if(count==l2){
		yes=1;
		if(l2==l3){
		   for(j=0;j<l2;j++){
		     s[i+j]=re[j];
		   }
		   printf("%s",s);break;
		}
		if(l2>l3){
		   for(j=0;j<l3;j++){
		     s[i+j]=re[j];
		   }
		   for(j=0;j<l1-i-l2;j++){
		     // t=s[i+l2+j];
			  s[i+l3+j]=s[i+l2+j];
			  
		   }
		   for(j=0;j<l1+l3-l2;j++) printf("%c",s[j]);
		   break;
		}
		if(l2<l3){
		  /* for(j=0;j<l2;j++){
		     s[i+j]=re[j];
		   }
		   for(j=0;j<l1-i-l2;j++){
		     // t=s[i+l2+j];
			  s[l1-j]=s[l1+l3-l2-j];
			  
		   }
		   for(j=l2;j<l3;j++){
		      s[i+j]=re[j];
		   }*/
		   for(j=0;j<i;j++){
		      printf("%c",s[j]);
		   }
		   printf("%s",re);
		   for(j=i+l2;j<l1;j++){
		      printf("%c",s[j]);
		   }
		   break;
		}
	}
	
}
if(yes==0){
	//printf("HERE\n");
	//printf("%s\n",s1);
	for(j=0;j<l1;j++) {
		printf("%c",s1[j]);
		//printf("\0");
	}
	
}

}

