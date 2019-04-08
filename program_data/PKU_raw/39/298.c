struct m
{ int m1,m2,is,sum;
  char n[27],w,a;

}
main()
{ int n,k,s,i,j,m,f1(S),f2(S),f3(S),f4(S),f5(S);
  char *t,a[26];

  struct m *head,*p1,*p2,*tp,*q;
  scanf("%d",&n);
  head=(struct m*)calloc(n,L);
  for(i=0;i<n;i++)
  { p1=head+i;
    scanf("%s%d%d %c %c%d",p1->n,&p1->m1,&p1->m2,&p1->a,&p1->w,&p1->is);
    p1->sum=f1(p1)+f2(p1)+f3(p1)+f4(p1)+f5(p1);

  }
  s=0;
  for(m=head->sum,k=0,i=0;i<n;i++)
  {  if((head+i)->sum>m){k=i;m=(head+i)->sum;}
      s+=(head+i)->sum;
  }
  printf("%s\n%d\n%d",(head+k)->n,m,s);

}
int f1(S)
{  return 8000*(s->m1>80&&s->is>=1);

}
int f2(S)
{ return 4000*(s->m1>85&&s->m2>80);
}
int f3(S)
{ return 2000*(s->m1>90);
}
int f4(S)
{ return 1000*(s->w=='Y'&&s->m1>85);
}
int f5(S)
{ return 850*(s->a=='Y'&&s->m2>80);
}
