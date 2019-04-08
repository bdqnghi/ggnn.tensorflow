

void main()
{char a[501],x,y,z,h;int n,c[501],i,m,r,max,j,t,b[501];
scanf("%d",&n);
	  scanf("%s",a);
m=strlen(a);

for(r=0;r<m;r++)
b[r]=0;

    if(n==2)
		{
		for(i=0;i<m-1;i++)
		{
			x=a[i];y=a[i+1];c[i]=0;
		for(j=0;j<m-1;j++)
			if(a[j]==x && a[j+1]==y) {c[i]++;b[j]=i;}
		}
		}
   else if(n==3)
	   {
	   for(i=0;i<m-2;i++)
	   {
			x=a[i];y=a[i+1];z=a[i+2];c[i]=0;
		for(j=0;j<m-1;j++)
			if(a[j]==x && a[j+1]==y && a[j+2]==z) {c[i]++;b[j]=i;}
	   }
		}
   else if(n==4)
	   {
	   for(i=0;i<m-2;i++)
	   {
			x=a[i];y=a[i+1];z=a[i+2];h=a[i+3];c[i]=0;
		for(j=0;j<m-1;j++)
			if(a[j]==a[i] && a[j+1]==a[i+1] && a[j+2]==a[i+2] && a[j+3]==a[i+3]) {c[i]++;b[j]=i;}
	   }
		}


max=0;

    if(n==2)
        {for(i=0;i<m-1;i++)
			if(c[i]>max) {max=c[i];t=i;}
			if(max==1) printf("NO");
			else
			{
			printf("%d\n",c[t]);
			for(i=0;i<m-1;i++)
				if(c[i]==max && b[i]!=0)
				{
					printf("%c%c\n",a[i],a[i+1]);
					for(r=i+1;r<m;r++)
						if(b[r]==b[i]) b[r]=0;
				}
			}
			
		}
	else if(n==3)
        {for(i=0;i<m-2;i++)
			if(c[i]>max) {max=c[i];t=i;}
			if(max==1) printf("NO");
			else
			{
			printf("%d\n",c[t]);

			for(i=0;i<m-2;i++)
				if(c[i]==max && b[i]!=0)
				{
					printf("%c%c%c\n",a[i],a[i+1],a[i+2]);
				    for(r=i+1;r<m;r++)
						if(b[r]==b[i]) b[r]=0;
				}
			}
				
		}
      else if(n==4)
		  {for(i=0;i<m-3;i++)
			if(c[i]>max) {max=c[i];t=i;}
			if(max==1) printf("NO");
			else
			{
			printf("%d\n",c[t]);
			for(i=0;i<m-3;i++)
				if(c[i]==max && b[i]!=0)
				{
					printf("%c%c%c%c\n",a[i],a[i+1],a[i+2],a[i+3]);
					for(r=i+1;r<m;r++)
						if(b[r]==b[i]) b[r]=0;
				}
			}
			
		  }


}

