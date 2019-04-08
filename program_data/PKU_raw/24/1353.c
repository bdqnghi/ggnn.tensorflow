int main()
{
    char z[999],k[55],h[55];
    int  i,j,n,max,min,x,n1,n2,n3,n4;
    int m[55];
    int q=0,o=0;
    gets(z);
    n=strlen(z);
    int p=1;
    for(i=0;i<n;i++){
        if(z[i]==' '){
           m[p]=i;
           p++;
        }
    }
	m[0]=-1;
	m[p]=n;
	n1=n3=-1;
	n2=n4=m[1];
    max=min=m[1]-m[0]-1;
    if(p>1){
      for(j=0;j<p;j++){
         x=m[j+1]-m[j]-1;
         if(x>max){
            max=x;
            n1=m[j];
            n2=m[j+1];
         }else if(x<min){
            min=x;
            n3=m[j];
            n4=m[j+1];
         }
	  }
      
     for(i=n1+1;i<n2;i++){
         k[q]=z[i];
         q++;
      }
      k[q]='\0';
      for(i=n3+1;i<n4;i++){
         h[o]=z[i];
         o++;
      } 
      h[o]='\0';
   }
  
   printf("%s\n%s",k,h);
   return 0;
}