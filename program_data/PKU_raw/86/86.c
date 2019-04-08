
 int main ()
 {
	 int n;
	 scanf("%d",&n);
	 int i;
	 int *s,*r;
	 s=(int *)malloc(sizeof(int)*n);                         
	 r=(int *)malloc(sizeof(int)*n);
	 for (i=0;i<n;i++)
	 {
		 scanf("%d",&s[i]);
		 if (s[i]==0)r[i]=60;
		 else 
		 {
			 int j;
			 int *e;
			 e=(int *)malloc(sizeof(int)*s[i]);
			 for (j=0;j<s[i];j++)
			 {
				 scanf("%d",&e[j]);
			 }
			 if (3*s[i]+e[j-1]<=60)
				 r[i]=60-3*s[i];
			 else if (3*s[i]+e[j-1]<=63&&3*s[i]+e[j-1]>=57)
				 r[i]=e[j-1];
			 else if (3*s[i]+e[j-1]>60&&3*(s[i]-1)+e[j-2]<=63&&3*(s[i]-1)+e[j-2]>=57)
				 r[i]=e[j-2];
			 else if (3*(s[i]-1)+e[j-2]<=57)
				 r[i]=60-3*(s[i]-1);
			 else if (3*(s[i]-1)+e[j-2]>60&&3*(s[i]-2)+e[j-3]<60)
				 r[i]=60-3*(s[i]-2);
		 }
	 }
	 for (i=0;i<n;i++)
	 {
		 printf("%d\n",r[i]);
	 }
	 return 0;
 }

