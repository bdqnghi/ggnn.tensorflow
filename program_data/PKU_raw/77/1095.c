char s[100];
char a,b;
int num[100];
int n,q=0;
int main ()
{ void p();
  int i;
  gets(s);
  n=strlen(s);
  for(i=0;i<100;i++)
   num[i]=1;
  a=s[0];
  b=s[n-1];
  p();
  return 0;
}

void p ()
{   int i,j,t=0,m;
   for(i=0;i<n-1;i++)
     {for(j=i+1;j<n;j++)
      { 
	    for(m=i+1;m<j;m++)
		   if (num[m]!=0) break;
	   if(s[i]==a && s[j]==b && num[i]==1 && num[j]==1&&m==j)
       { printf("%d %d\n",i,j);
         num[i]=0;
         num[j]=0;
         t=1;
        }
        if (t==1) break;
      }
       if (t==1) break;
      }
      q++;
     if (q!=n/2) p ();
}



