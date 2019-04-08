
main(){
       char *p;
       int i,j,len,n,*judge;
       scanf("%d\n",&n);
       judge=(int*)malloc(32*sizeof(int));
       
       for(i=0;i<n;i++){
         p=(char*)malloc(80*sizeof(char));
         gets(p);
         len=strlen(p);
         if(*p==' '||(*p>=65&&*p<=90)||(*p>=97&&*p<=122)||*p==95){
           for(j=0;j<len;j++){
             if( *(p+j)<'0'||(*(p+j)>'9'&&*(p+j)<65)||(*(p+j)>90&&*(p+j)<95)||*(p+j)==96||(*(p+j)>122) ) {*(judge+i)=0;break;}
           }
           if(j==len) *(judge+i)=1;
         }
         else *(judge+i)=0;
       }
       for(i=0;i<n;i++){
         printf("%d\n",*(judge+i));
       }
}
