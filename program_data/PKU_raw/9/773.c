struct x
{char a[10];
int b;
};struct x y[100];
void main()
{int n,i,j,m;
char s[10];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s %d",&y[i].a,&y[i].b);
}
for(j=0;j<n-1;j++)
 for(i=0;i<n-1-j;i++)
  {if(y[i].b<y[i+1].b&&y[i+1].b>=60)
   {strcpy(s,y[i].a);
    strcpy(y[i].a,y[i+1].a);
    strcpy(y[i+1].a,s);
    m=y[i].b;
    y[i].b=y[i+1].b;
    y[i+1].b=m;
    }
  }
for(i=0;i<n;i++)
printf("%s\n",y[i].a);
}
