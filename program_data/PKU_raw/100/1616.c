int main()
{
 char zu[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
 char su[300];
 int k,i,x[52]={0},y=0;
 scanf("%s",su);
 for(i=0;i<52;i++)
 {
 for(k=0;k<strlen(su);k++)
 if(su[k]==zu[i])
 x[i]++;
 if(x[i]!=0)
{ printf("%c=%d\n",zu[i],x[i]);y++;}
}if(y==0)
printf("No");
    return 0;}
