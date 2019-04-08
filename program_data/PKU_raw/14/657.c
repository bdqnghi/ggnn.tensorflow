struct student
{int nn;
int nnn;
int nmn;
int sum;
}st[100002],tmp;
int main()
{int i,j,m,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d %d %d",&st[i].nn,&st[i].nnn,&st[i].nmn);
st[i].sum=st[i].nnn+st[i].nmn;
}
for(i=1;i<=3;i++)
  {for(j=i+1;j<=n;j++)
      {if(st[i].sum<st[j].sum)
      {tmp=st[i];
  st[i]=st[j];
  st[j]=tmp;
		}
		
	   }
  }
  for(i=1;i<=3;i++)
  {printf("%d %d",st[i].nn,st[i].sum);
  if(i<3)
  printf("\n");
		}
  return 0;
}