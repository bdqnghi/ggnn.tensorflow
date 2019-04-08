int main ()
{ int num[400];
  int i,n,j,t;
  char c;
   for(i=0;;i++)
  { scanf("%d%c",&num[i],&c);
    if(c!=',') break;
  }
  n=i+1;
  for(i=0;i<n;i++)
   for(j=0;j<n-i-1;j++)
  {   if(num[j]<num[j+1]) 
     {  t=num[j];
        num[j]=num[j+1];
        num[j+1]=t;
     }
   }
  for(i=0;i<n;i++)
    if(num[i]<num[0]) {printf("%d",num[i]);
	
 break;
}
	if(i==n) printf("No");
return 0;
}
