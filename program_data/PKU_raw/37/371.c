main()
{ char *c,**s,**h,d;
  int i=0,n,j=0,w=1,a=0,*b,t=0;
  b=(int*)calloc(26,sizeof(int));
  scanf("%d\n",&n);
  h=s=(char**)calloc(n,sizeof(char*));
  for(i=0;i<n;i++){
  c=(char*)calloc(100,sizeof(char));
  gets(c);
  *(s+i)=c;

  }

  for(i=0;i<n;i++)
  { for(w=0;w<26;w++)*(b+w)=0;
    for(j=0,d=*(*(s+i)+j);*(*(s+i)+j)!='\0';j++)
    { d=*(*(s+i)+j);
      *(b+(d-97))=*(b+d-97)+1;
    }
    t=0;
    for(j=0,d=*(*(s+i)+j);*(*(s+i)+j)!='\0';j++)
    {  d=*(*(s+i)+j);
       w=*(b+(d-97));
       if(w==1){printf("%c",d);t=1;break;}
    }
    if(t==0)printf("no");
    if(i!=n-1)printf("\n");
  }
}