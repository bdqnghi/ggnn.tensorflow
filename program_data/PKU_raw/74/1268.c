void main()
{int m,n;
 int t[100]={0};

 int i;
 int j=0;
 int ifhw(int num);
 int ifs(int num);
 scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++)
 { if (ifhw(i))
	 if (ifs(i))
	  {t[j]=i;
	  j++;}}

 j--;
 if(t[0]==0)
  printf("no");
  else
  {for(i=0;i<j;i++)
   printf("%d,",t[i]);
   printf("%d\n",t[j]);}
}


int ifhw(int num)
{int digit[10];
 int i=0;
 int n;
 while(num>0)
  {digit[i]=num-num/10*10;
   i++;
   num=num/10;}
   n=i;
 for(i=0;i<n/2;i++)
  {if(digit[i]!=digit[n-i-1])
	{return(0);
	break;}}
}

int ifs(int num)
{int i;
 for(i=2;i<num;i++)
 {if(num%i==0)
  {return(0);
  break;}}
}