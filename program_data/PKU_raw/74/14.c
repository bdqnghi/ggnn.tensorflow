void main()
{int a,b,i,j,k,s,t=0;
 scanf("%d %d",&a,&b);
 for(i=a;i<=b;i++)
 {for(j=2;j<=sqrt(i);j++)
    if(i%j==0)
		break;
	if(j>sqrt(i))
	{k=i;
	 s=0;
	 while(k>0)
	 {s=10*s+k%10;
	 k=k/10;}
	 if(s==i)
	 {if(t!=0)
	  printf(",");
	  printf("%d",i);
	  if(t==0)
		  t++;}
	}
	}
 if(t==0)
	 printf("no");
}