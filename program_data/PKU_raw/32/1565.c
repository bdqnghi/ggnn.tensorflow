char a[100],b[100];
void reverse(char a[])
{int i,m;
 char t;
 m=strlen(a);
 for(i=0;i<m/2;i++)
   {t=a[i];
    a[i]=a[m-i-1];
    a[m-1-i]=t;
   }
}
void minus(char a[],char b[])
{int i;
for(i=0;i<strlen(b);i++)
 {a[i]=a[i]-b[i];
  if(a[i]<0)
    {a[i]=a[i]+10;
     a[i+1]=a[i+1]-1;
     }
  a[i]=a[i]+48;
  }
}
void main()
{int i,n;char c[2];
 scanf("%d\n",&n);
 for(i=0;i<n-1;i++)
   {
     gets(a);    gets(b);
     gets(c);
     reverse(a);   reverse(b);
     minus(a,b);
     reverse(a);
     puts(a);
    }
     gets(a);       gets(b); 
     reverse(a);   reverse(b);
     minus(a,b);
     reverse(a);
     puts(a);
}
