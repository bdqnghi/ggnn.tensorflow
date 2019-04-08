int main()
{
	int n,i,start=0,end,p1=0,p2=0,x1,x2;
	float a,b;
	scanf("%d",&n);
	end=n-1;
	struct student
	 {char sex[6];
	  float height;
	 }s[40],t;
	for(i=0;i<n;i++)
	 scanf("%s %f",s[i].sex,&s[i].height);
	while(start<=end)
	 {a=b=3;
	  for(i=start;i<=end;i++)
	   {if(s[i].sex[0]=='m')
	     {p1=1;
		  if(s[i].height<a)
	       {x1=i;a=s[i].height;} 
	     }
	    else
	     {p2=1;
		  if(s[i].height<b)
	       {x2=i;b=s[i].height;}
	     }
	   }
	  if(p1)
	   {t=s[x1];s[x1]=s[start];s[start]=t;
	    if(x2==start)
	     x2=x1;
	    start++;p1=0;
	   }
	  if(p2)
	   {t=s[x2];s[x2]=s[end];s[end]=t;end--;p2=0;}
	 }
	for(i=0;i<n;i++)
	 {if(i>0)
	   printf(" ");
	  printf("%.2f",s[i].height);
	 }
}