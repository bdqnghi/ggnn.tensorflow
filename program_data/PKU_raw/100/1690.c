int main()
{
   char s[400],*p,*q,t[400]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   int u[100],i=0,k=0,j=0,f=0;
   for(k=0;k<52;k++){
	   u[k]=0;
   }
   scanf("%s",s);
   for(q=t;*q!='\0';q++){
     for(p=s;*p!='\0';p++){
      if(*p==*q){
	   u[i]++; f=1 ;              
      }
     }
     i++;
   }
   for(q=t;*q!='\0';q++){
    if(u[j]!=0){
	    printf("%c=%d",*q,u[j]);printf("\n");
    }
    j++;
   }
   if(f==0){
	   printf("No");
   }
return 0;
   }
