int main(){
char num[100]={0}; int i,j,k,m,t;
 gets(num); t=strlen(num);
 for(i=0;i<t;i++)
{ while(num[i]!=num[0]&&num[i]!='\0')
{     k=i;
    for(j=k;j>=0;j--)
   if(num[j]==num[0])
     break;
printf("%d %d\n",j,k);
num[j]='\0'; num[k]='\0';
           } 
               }
return 0;



}