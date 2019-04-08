main()
{int n,g;
scanf("%d",&n);
for(g=0;g<n;g++)
{
char a[1000];
char b[1000],c[1000];
memset(c,'0',sizeof(c));
scanf("%s %s",a,b);
int l1,l2;
l1=strlen(a);
l2=strlen(b);
int l;
if(l1>l2)
  l=l1;
else l=l2;
//printf("%d\n",l);
   int i;
   for(i=l;i>l-l1;i--)
{
a[i]=a[i-(l-l1+1)];

}
//printf("%c\n",a[l]);
for(i=l;i>l-l2;i--)
b[i]=b[i-(l-l2+1)];
//printf("%c\n",b[l]);
for(i=0;i<=l-l1;i++)
{
a[i]='0';
} 
//printf("%c\n",a[l-l1]);
for(i=0;i<=l-l2;i++)
{
b[i]='0';
}
//printf("%c\n",b[l-l2+1]);
int flag=0; 
for(i=l;i>0;i--)
{int sum=0;
  if(flag==1)
   sum=a[i]-b[i]-1;
  if(flag==0)
  sum=a[i]-b[i];
  if(sum<0)
    {c[i]=sum+'0'+10; flag=1;}
  else
   {c[i]=sum+'0';flag=0;}
  }
 //printf("%c %c %c %c\n",c[l],c[3],c[2],c[1]);

int flag1=0;
//printf("%c\n",c[0]);
int t;
for(i=0;i<=l;i++)
{
                 if(c[i]!='0')
                  {t=i;break;}
                  
                  }
                  for(i=t;i<=l;i++)
                               printf("%c",c[i]);
                               printf("\n");
/*if(flag)
{
for(i=0;i<=l;i++)
   printf("%c",c[i]);
}
else
{for(i=1;i<=l;i++)
printf("%c",c[i]);
}*/



}

}
