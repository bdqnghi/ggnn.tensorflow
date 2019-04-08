void main()
{
 int i,j=0,k=0;
 char *p;
 p=(char *)malloc(30*sizeof(char));
 char (*q)[10];
 q=(char (*)[10])malloc(10*10*sizeof(char));
 char a[10][10];
 for(i=0;i<30;i++)
 scanf("%c",p+i);
 for(i=0;*(p+i)!='\0';i++)
 {
   if(*(p+i)>='0'&&*(p+i)<='9') {*(*(q+j)+k)=*(p+i);k++;}
   else 
       if(*(p+i+1)>='0'&&*(p+i+1)<='9')
       {
       *(*(q+j)+k)='\0';j++;k=0;
        }
  }
  *(*(q+j)+k)='\0';
  for(i=0;i<=j;i++)
 printf("%s\n",*(q+i));
}