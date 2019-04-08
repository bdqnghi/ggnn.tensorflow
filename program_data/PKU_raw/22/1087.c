int turn(char a[])
{ int sum=0,i;
  for(i=0;a[i]!='\0';i++)
  sum=sum*10+a[i]-'0';
return sum;
}
int main()
{  char str[300][5]={'\0'},c;
   int i,j,num[300],max,nmax,count;
   for(i=0,j=0;(c=getchar())!='\n';j++)
   {if (c==',') {i++;j=-1;}
   else str[i][j]=c;}
   count=i+1;
   for(i=0;i<count;i++)
	   num[i]=turn(str[i]);
   max=num[0];nmax=0;
   for(i=0;i<count-1;i++)
	  { if(num[i+1]>max) {nmax=max;max=num[i+1];}
	   else if((max-num[i+1]<max-nmax)&&max!=num[i+1]) nmax=num[i+1];}
   for(i=0;i<count-1;i++)
	   if(num[i+1]!=num[i]) break;
	   if(i==count-1) printf("No\n");
	   else printf("%d\n",nmax);
	   return 0;
}
