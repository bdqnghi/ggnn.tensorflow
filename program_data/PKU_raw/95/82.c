int main(int argc, char** argv[])
{    char s1[80],s2[80];
int i;
     gets(s1);
	 gets(s2);
	 for(i=0;i<80;i++){
		 if(s1[i]>=97&&s1[i]<=122){
			 s1[i]=s1[i]-32;}
          if(s2[i]>=97&&s2[i]<=122){
			 s2[i]=s2[i]-32;}
	 }


	 if(strcmp(s1,s2)==0){
		 printf("=");}
	 if(strcmp(s1,s2)>0){
		 printf(">");}
	 if(strcmp(s1,s2)<0){printf("<");}
	 return 0;
	 }

