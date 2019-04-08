int main (){
int n,i;
char y[260],t[260]={0};
scanf ("%d",&n);
for (i=0;i<n;i++){
scanf ("%s",y);
char *py=y,*pt=t;
for (;*py!='\0';py++,pt++)
{
if (*py=='A') *pt='T';
if (*py=='T') *pt='A';
if (*py=='G') *pt='C';
if (*py=='C') *pt='G';

}
*pt='\0';
printf("%s\n",t);}
return 0;
}