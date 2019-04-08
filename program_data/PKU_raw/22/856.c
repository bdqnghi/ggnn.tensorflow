int main()
{ int num[300];
  int i,j,k,max,next_max;
  char c;
  i=0;
  max=0;
  next_max=0;
  do
  {i+=1;
   scanf("%d%c",&num[i],&c);
   if (num[i]>max)
	 max=num[i];
   }while(c==',');
  if (i==1)
	 printf("%s\n","No");
  else
  {
	 for (j=1;j<=i;j++)
	 { if (num[j]==max)
	   num[j]=0;
	   else{}
	   if (num[j]>next_max)
		   next_max=num[j];
	   else {}
	 }
	 if (0==next_max)
		 printf("%s\n","No");
	 else
		 printf("%d\n",next_max);
    
  }
	
}