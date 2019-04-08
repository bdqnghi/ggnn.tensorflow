
int main()
{
 char s[1000],sub[100],*ptr;
 int i,j,mark=0;
 gets(s);
 ptr=s;
 for( ; *ptr != 0; )
 {
 	if(*ptr == ' ') {		ptr++;		continue;    }
    /* get a word from s */
  for(i=0; i<100; i++)          sub[i]=0;
   
  for ( i=0 ; ; ptr++, i++)
  { 
       sub[i] = *ptr;
       if (((sub[i] == ' ') || (sub[i]==0)) && (mark==0) )
       {
          sub[i] = 0;
          printf("%d",strlen(sub));
          mark=1;
          break;
       }
       if(((sub[i] == ' ') || (sub[i]==0)) && (mark!=0))
       {
          sub[i] = 0;
          printf(",%d",strlen(sub));
          break;
       }  
  }
	if(*ptr == 0)  break;
	else				   ptr++;
 }
 return;
}