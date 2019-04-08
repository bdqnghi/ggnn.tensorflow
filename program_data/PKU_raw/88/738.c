
void main()
{
  char s[30],* ps;
  int i,j,k,m,e,d,n,a[10],* pa;
  gets(s);  
  ps=s;
  pa=a;
  n=0;
  i=0;
  j=0;
  while(* (ps+i)!='\0')
  {if((*(ps+i)>='0')&&(*(ps+i)<='9'))
  j++;
  else
  {if(j>0)
  {d=* (ps+i-1)-48;
  k=1;
  while(k<j)
  {e=1;
  for(m=1;m<=k;m++)
	  e=e*10;
  d=d+(* (ps+i-1-k)-48)*e;
  k++;
  }
  *pa=d;
  n++;
  pa++;
  j=0;
  }
  }
  i++;
  }
  if(j>0)
  {d=* (ps+i-1)-48;
  k=1;
  while(k<j)
  {
	  e=1;
	  for(m=1;m<=k;m++)
		  e=e*10;
	  d=d+(* (ps+i-1-k)-48)*e;
	  k++;
  }
  *pa=d;
  n++;
  j=0;
  }
  j=0;
  pa=a;
  for(j=0;j<n;j++)
printf("%d\n",* (pa+j));	
}