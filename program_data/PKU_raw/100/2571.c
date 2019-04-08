int l,n,a[300],t;
char c[300],b[300],v;
void main()
{int i,j,k=0,p=0;
 gets(c);
 l=strlen(c);
 for(i=0;i<l;i++)
 {n=1;
	 if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z'))
	 {for(j=i+1;j<l;j++)
	 {if(c[j]==c[i])
	  {n+=1;c[j]=' ';}
	 }
	  b[k]=c[i];a[k]=n;k++;
	 p=1;
	 }
 }
 for(i=0;i<k-1;i++)
	 for(j=0;j<k-1-i;j++)
		 if(b[j]>b[j+1])
		 {v=b[j];b[j]=b[j+1];b[j+1]=v;
		  t=a[j];a[j]=a[j+1];a[j+1]=t;
		 }
 for(i=0;i<k;i++)
	 printf("%c=%d\n",b[i],a[i]);
 if(p==0)printf("No");
}