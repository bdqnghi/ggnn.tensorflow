int main()
{
	double x=0,ratio=0;
	int i=0,num=0,l1=0,l2=0,temp=1;
	char sequen1[LEN],sequen2[LEN];
	scanf("%lf",&x);
	scanf("%s",sequen1);
	scanf("%s",sequen2);
	l1=strlen(sequen1);
	l2=strlen(sequen2);
	if(l1!=l2)
	{
	  printf("error");
	  temp=0;
	}
	else
	{
	  for(i=0;i<l1;i++)
	  {
	    if((sequen1[i]!='A'&&sequen1[i]!='T'&&sequen1[i]!='G'&&sequen1[i]!='C')||(sequen2[i]!='A'&&sequen2[i]!='T'&&sequen2[i]!='G'&&sequen2[i]!='C'))
	    {
	      printf("error");
		  temp=0;
		  break;
	    }
	  }
	}
	if(temp==1)
	{
	  for(i=0;i<l1;i++)
	  {
	    if(sequen1[i]==sequen2[i])
	    {
	      num++;
	    }
	  }
	  ratio=1.0*num/l1;
	  if(ratio>x)
	  {
	    printf("yes");
	  }
	  else
	  {
	    printf("no");
	  }
	}
	return 0;
}
