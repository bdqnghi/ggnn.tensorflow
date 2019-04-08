  int main()
{
	  int a,b,n,i;
	  int p=0,q=0;
	  scanf("%d",&n);
	     for(i=0;i<n;i++)
		 {
		   scanf("%d%d",&a,&b);
		    if (a==2&&b==0)
			{p+=1;}
			else if(a==1&&b==2)
			{p+=1;}
			else if(a==0&&b==1)
			{p+=1;}
		    else if(b==2&&a==0)
			{q+=1;}
			else if(b==1&&a==2)
			{q+=1;}
			else if(b==0&&a==1)
			{q+=1;}
		    else if(a=b)
			{p+=0;}
		 }
		 
		 if(p>q)
		 {printf("A");}
		 else if(p<q)
		 {printf("B");}
         else if(p=q)
		 {printf("Tie");}
		 








           return 0;
	   }