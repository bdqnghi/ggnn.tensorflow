int main()
{int i,k,n;
 char *p,*s;
 p=(char *)malloc(1000*sizeof(char)); 
 gets(p);
 s=p;
 n=strlen(p);
 *(p+n)=' ';
 for(k=0,i=0;i<=n;i++)
 {if(*(s+i)==' '&&*(s+i-1)!=' '){
  if(i==n){printf("%d",k);k=0;}
  else{printf("%d,",k);k=0;}
 }
  if(*(s+i)!=' ') k++;
 }
}