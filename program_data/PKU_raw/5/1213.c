
int main (){ 
	int i,q;
    char a[501],b[501],c[10];
	double n,t=0;
	gets (c);
	n = atof(c);
	gets (a);
	gets (b);
	q=strlen(a);
	if (strlen(a)!=strlen(b)){
printf("error");
return 0;
	}
else {
   for (i=0;a[i]!='\0';i=i+1){
	   if (a[i]>97||b[i]>97){

		   printf("error");
	   return 0;
	   }
	     else {
           if (a[i]==b[i])
              t=t+1;
	   
          
          
		 }
   }
}
	      



          if (n<0)
                printf ("yes");
          else{
			  if (t/(q*1.00)>n)
                printf ("yes");
              else 
                printf ("no");
		  }

return 0;
}
