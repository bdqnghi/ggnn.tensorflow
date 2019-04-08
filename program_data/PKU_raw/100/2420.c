void main()
{int i,flag=0;
 char x[500];
 int y[300]={0};
 gets(x);
 for (i=0;i<strlen(x);i++)
 {if ((x[i]>64&&x[i]<91)||(x[i]>96&&x[i]<123))
  y[(int)x[i]]++;
 }
 for (i=65;i<=90;i++)
 {if(y[i]==0)
    continue;
  printf("%c=%d\n",i,y[i]);
  flag++;
 }
 for (i=95;i<=122;i++)
 {if(y[i]==0)
    continue;
  printf("%c=%d\n",i,y[i]);
  flag++;
 }
 if(flag==0)
	 printf("No");
}