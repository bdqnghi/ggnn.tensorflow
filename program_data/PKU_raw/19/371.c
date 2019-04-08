void main()
{char a[100]={'\0'},b[100]={'\0'},c[100]={'\0'},d[100]={'\0'};int h,i,j,k,m,n,r;
gets(a);
gets(b);
gets(c);
m=strlen(b);
n=strlen(c);
for(h=0,i=0;*(a+i)!='\0';)
{if( (*(a+i)==*b)&& ( (i>=1&&*(a+i-1)==' '&& (*(a+i+m)==' '||*(a+i+m)=='\0') )||(i==0&& (*(a+i+m)==' '||*(a+i+m)=='\0')) ) )
 {r=i;
   for(j=0;j<m;j++)
	   if(*(a+r+j)!=*(b+j)) break;
	   if(j==m) {for(k=0;k<n;k++) {*(d+h)=*(c+k);h++;i++;} i=i+m-n; 
 continue;}
 }
 *(d+h)=*(a+i);
 h++;i++;}
puts(d);}
  
