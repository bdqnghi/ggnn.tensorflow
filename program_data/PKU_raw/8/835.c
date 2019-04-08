int main()
{void st(int s[],int i);
void cha(int s[],int i);
void pp(int s[],int ss[],int m,int n);
int m,n;
int s[100]={0};
int ss[100]={0};
scanf("%d %d\n",&m,&n);
st(s,m);
st(ss,n);
cha(s,m);
cha(ss,n);
pp(s,ss,m,n);
return 0;
}
void st(int k[],int i)
{int j;
for(j=1;j<=i;j++)
scanf("%d",&k[j]);
}
void cha(int k[],int i)
{int j,m,temp;
for(j=1;j<i;j++)
{for(m=j+1;m<=i;m++)
     {if(k[m]<k[j])
          {temp=k[m];k[m]=k[j];k[j]=temp;}
      }
}
}
void pp(int s[],int ss[],int m,int n)
{int i=2;
	printf("%d",s[1]);
for(i=2;i<=m+n;i++)
{if(i<=m)
printf(" %d",s[i]);
else 
printf(" %d",ss[i-m]);
}
}