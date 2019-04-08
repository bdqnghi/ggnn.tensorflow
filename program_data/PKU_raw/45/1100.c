int main(){
  int j,k,i=0;
char ch[50],str[50],ss[50];
scanf("%s  %s",ch,str);
while(ch[i++]);i=i-1;
for(j=0;str[j+i];j++)
{for(k=0;k<i;k++)ss[k]=str[j+k];
 ss[k]='\0';
 if( strcmp(ss,ch)==0  )break;}
printf("%d",j);
} 