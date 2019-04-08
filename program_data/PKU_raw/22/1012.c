main()
{ int s[500],i,t,k,j,m;
      char c[500];
     for(j=1,m=1;c[m]!='\n';j++)
     {scanf("%d",&s[j]);
      c[m]=getchar();
     }
     if(j==2)
     printf("No");
     else if(j==3)
     {if(s[1]>s[2]) printf("%d",s[2]);
      else if(s[1]<s[2]) printf("%d",s[1]);
      else printf("No");
     }
     else{
     
	  for(k=1;k<=j-1;k++)
	  for(i=1;i<=j-k-1;i++)
	  if(s[i+1]>s[i])
	  {t=s[i+1];s[i+1]=s[i];s[i]=t;
	  }
	  for(i=1;i<j-1;i++)
	  if(s[i]!=s[i+1])break;
	  if(i<j-1) printf("%d",s[i+1]);
	  else if(i>=j-1)printf("No");
}
	   
}