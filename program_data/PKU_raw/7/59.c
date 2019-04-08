int main(){
   char st[LEN],su[LEN],re[LEN];
   scanf("%s\n%s\n%s",st,su,re);
   int m,n,i,j,p=0,q;
   n=strlen(st);
   m=strlen(su);
   for(i=0;i<n;i++){
       if(su[0]==st[i]){
          for(j=1;j<m;j++){
              if(su[j]!=st[i+j]){
                 break;
			  }else p++;
		  }
	   }
	   if(p==(m-1)){
		   for(q=i;q<i+m;q++){
			   st[q]=re[q-i];
		   }
		   break;
	   }
   }
   printf("%s",st);
   return 0;
}

