
void main()
{
  int m,i,j,x,y,s;
  char s1[100],s2[100];
 scanf("%s",&s1);
  scanf("%s",&s2);
  x=strlen(s1);
  y=strlen(s2);
  if (x==y)
  {
for (j=1;j<=50;j++)
	  {
  for (i=0;i<=x-2;i++)
  {
	  if (s1[i]<s1[i+1])  
	  { 
	    m=s1[i];
		s1[i]=s1[i+1];
	    s1[i+1]=m;
	  }
}}
for (j=1;j<=50;j++)
	  {
 for (i=0;i<=x-2;i++)
  {
	  if (s2[i]<s2[i+1])  
	  { 
	    m=s2[i];
		s2[i]=s2[i+1];
	    s2[i+1]=m;
	  }
}}
 for (i=0;i<=x-1;i++)
 {
   if (s1[i]!=s2[i])
   {printf("NO");break;} 
   if (i==x-1) printf("YES");
 }
}
  else {printf("NO");}
}
