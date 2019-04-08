int main()
{
 char str[1000];
 int i,j,k,t,m;
 char c,x;
 for(i=0;;i++)
 {
  scanf("%c",&str[i]);
  if(str[i]=='\n')
   break;
 }
 x=str[0];
 m=x;
 if(m>=97)
 {
	 m=m-32;
	 x=m;
 }
 t=0;
for (j=0;j<i;j++)
{
 c=str[j];
 k=c;
if(k>=97)
 {
  k=k-32;
  c=k;
}
 if(c==x)
 {
	 t=t+1;
 }
 if(c!=x)
 {
	 printf("(%c,%d)",x,t);
	 t=1;
	 x=c;
 }
}
printf("(%c,%d)",x,t);
return 0;
} 