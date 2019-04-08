void main()
{int n,flag,i,max;
 char x[501],*p,*q;
 int y[500],*o,*r;
 for (o=y;o<y+499;o++)
	 *o=1;
 scanf("%d\n",&n);
 gets(x);
 for (p=x,o=y;p<x+strlen(x);p++,o++)
	 {if (*o==-1)
         continue;
	  for (q=p+1,r=o+1;q<=x+strlen(x)-n;q++,r++)
	     {for (flag=1,i=0;i<n;i++)
		      if (*(p+i)!=*(q+i))
			  {flag=0;break;}
		  if (flag==1)
		      {*o=*o+1;*(r)=-1;}
	     }
     }
 for (max=0,o=y;o<y+strlen(x)-n;o++)
	 if (*o>max)
		 max=*o;
 if (max==1)
	 printf("NO");
 else {printf("%d\n",max);
      for (p=x,o=y;o<y+strlen(x)-n;o++,p++)
	     if (*o==max)
		     {for (i=0;i<n;i++)
			      printf("%c",*(p+i));
	           printf("\n");}}
}