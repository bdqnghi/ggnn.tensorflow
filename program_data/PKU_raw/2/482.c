void main()
{char c;
int max=0,store,m,i,x[26][1000]={0},coun[27]={0},flag;
scanf("%d", &m);
for (i=1;i<=m;i++)
	{scanf("%d ", &store);
     for (;;)
		 {scanf("%c", &c);
	      if (c<65||c>90)
			  break;
		  else {x[c-64][i]=store;coun[c-64]++;}}
    }
for (i=1;i<=26;i++)
   {if (coun[i]>max)
     {max=coun[i];
      flag=i+64;
     }
   }
printf("%c\n", flag);
printf("%d\n", coun[flag-64]);
for (i=1;i<=1000;i++)
	{if (x[flag-64][i]!=0)
	 printf("%d\n", x[flag-64][i]);
    }

}