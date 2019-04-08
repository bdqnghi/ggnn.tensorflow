
  

  char * MoveNext(char *p) 
 { 
	 while(isalpha(*p)&&*p) p++; 
	 while(!isalpha(*p)&&*p) p++;  
	 return p; 
 }  
  
 int StrWords(char *p) 
 {
	 int num=0; 
	 while(*p!='\0') 
		 if(*p==' ') p++; 
		 else  
		 {
			 num++; 
			 for(;*p!=' '&&*p!='\0';p++); 

		 }  
		 return num; 
 }  
  
 int CheckSame(char *s1,char *s2) 
 { 
	 char str[N],*p=str; 
	 while(isalpha(*s2)) 
		 *p++=*s2++; 
	 *p='\0';  
	 if(strcmp(s1,str)==0) return 1; 
	 else return 0; 
 }  
 void SwapWord(char *p2,char *p1,char *s)  
 { 
	 char *p,*t1,*t2,*t=s;  

	 int Dis,loop,k,len,tag,flag;  

	 Dis=strlen(p2)-strlen(p1); 
	 if(Dis<0) 
	 { 
		 tag=-1; Dis*=-1; 
	 }  
	 else if(Dis>0) 
		 tag=1; 
	 else 
		 tag=0;  
	 loop=StrWords(t);  
	 while(loop--) 
	 { 
		 if(CheckSame(p1,t))  
		 { 
			 switch(tag) 
			 { 
			 case -1: p=t; 
				 while(isalpha(*p)) *p++=' '; 
				 p=t; 
				 while(*p++) 
					 *(p-Dis)=*p; break; 
			 case 1: len=strlen(t); 
				 p=t+len;  
				 for(k=0;k<strlen(t);k++) 
					 *(p+Dis)=*p--; break; 
			 default: break;  
			 }  
			 p=t; t2=p2; 
			 while(*t2) 
				 *p++=*t2++; 
			 while(!isalpha(*p)) p++; 
		 } 
		 else t=MoveNext(t);  
	 } 
 } 
  


 
 int main() 
 { 
	 char sen[M],w1[N],w2[N]; 
     gets(sen); 
     gets(w1); 
     gets(w2); 
     SwapWord(w2,w1,sen); 
     puts(sen); 
     
     return 0; 
 } 