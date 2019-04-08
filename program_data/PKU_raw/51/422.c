char c[500][500]={{' '}};
int  a[500]={0},count=0,n,max=0;
char tp[300]={' '};
char target[501]={' '};
void getstring(int start,int n)
{int i,j,k,l,m;
 strcpy(tp," ");
 for (i=0;i<n;i++)
	 tp[i]=target[start+i];
}
void find()
{int i,j,k,l,m,flag=0;
	for (i=1;i<=count;i++)
		if(strcmp(c[i],tp)==0) {a[i]++;flag=7;break;}
	if (flag==0) {count++;strcpy(c[count],tp);a[count]++;}
}
void findmax()
{int i,j,k,l,m;
 for (i=1;i<=count;i++)
	if (a[i]>max) max=a[i];
}
void print()
{int i;
if (max<=1) printf("NO");
else {printf("%d\n",max);
      for (i=1;i<=count;i++)
		  if (a[i]==max) printf("%s\n",c[i]);
	}
}
int main()
{int i,j,k,l,m;
 scanf("%d\n",&n);
 gets(target);
 l=strlen(target);
 for (i=0;i<=l-n;i++)
 {getstring(i,n);
  find();
 }
 findmax();
 print();
 return 7;
}
     