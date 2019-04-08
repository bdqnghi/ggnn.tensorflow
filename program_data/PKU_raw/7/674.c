int main(){
   int i,a,b,c,d,e,sum=0,m=0,t=0,p,q,flag=0,flag2=0;
   char str[256],substr[256],rep[256],str1[256],str2[256];
   gets(str);
   gets(substr);
   gets(rep);
   a=strlen(str);
   b=strlen(substr);
   c=strlen(rep);
		for(m=m;m<a;m++){
			if(str[m]==substr[0]){
				for(p=m,q=0;q<b;p++,q++){
					if(str[p]!=substr[q]){
					flag=1;}
					
				}
				if(flag==1){
                                     flag=0;

				continue;}
                else{
				  flag2=1;
				  break;
				}

			}
			else{continue;}
		}
	
	

   
   if(flag2==1){
    
   for(i=0,d=0;i<m,d<m;d++,i++){
      str1[d]=str[i];
   }
   str1[m]='\0';
   for(i=m+b,e=0;i<a,e<a-m-b;e++,i++){
      str2[e]=str[i];
   }
   str2[a-m-b]='\0';
   printf("%s%s%s",str1,rep,str2);



   }
 else{
      printf("%s",str);
   }

return 0;
}