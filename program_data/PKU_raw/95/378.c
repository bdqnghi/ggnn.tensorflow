int strcmp(char *s,char *t){
 char *s1,*t1;
 s1=s;
 t1=t;
 for(s1=s;*s1!='\0';s1++)if(*s1>='A'&&*s1<='Z')*s1=*s1+32;
 for(t1=t;*t1!='\0';t1++)if(*t1>='A'&&*t1<='Z')*t1=*t1+32;
 for(;*s==*t&&*s!='\0';s++,t++);
 return(*s-*t);





}
main(){
 char str1[80],str2[80];
 gets(str1);
 gets(str2);
 if(strcmp(str1,str2)>0)printf(">\n");
 else if(strcmp(str1,str2)==0)printf("=\n");
 else printf("<\n");


 return 0;
}