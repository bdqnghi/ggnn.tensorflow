void main()
{
 struct br
 { char no[10];
   int s;
 }a[100],b[100],r;
 int n,i,j,t=0;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 { scanf("%s %d",a[i].no,&a[i].s);
 if (a[i].s>=60) { b[t]=a[i];t=t+1;}
   }
 for (i=0;i<t-1;i++)
	 for (j=0;j<t-1-i;j++)
		 if (b[j].s<b[j+1].s) {r=b[j];b[j]=b[j+1];b[j+1]=r;}
 for (i=0;i<t;i++)
	 printf("%s\n",b[i].no);
 for (i=0;i<n;i++)
	 if (a[i].s>=60) continue;
	 else printf("%s\n",a[i].no);
}