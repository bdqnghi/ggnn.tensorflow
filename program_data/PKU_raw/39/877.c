struct stu
{ char name[100];
  int qm;
  int py;
  char gb;
  char xb;
  int lw;
  int jj;
};
int a[101]={0};
int main()
{ void pai(struct stu s[],int n,int a[]);
  struct stu s[101];
  int i=0,n=0,sum=0;
  char m[100]={'\0'};
  for(i=0;i<101;i++)
  { strcpy(s[i].name,m);
    s[i].qm=0;
    s[i].py=0;
    s[i].gb='\0';
    s[i].xb='\0';
    s[i].lw=0;
    s[i].jj=0;
		}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ scanf("%s",s[i].name);
	  scanf("%d %d %c %c %d",&s[i].qm,&s[i].py,&s[i].gb,&s[i].xb,&s[i].lw);
	  if(s[i].qm>80&&s[i].lw>=1) s[i].jj=s[i].jj+8000;
	  if(s[i].qm>85&&s[i].py>80) s[i].jj=s[i].jj+4000;
	  if(s[i].qm>90) s[i].jj=s[i].jj+2000;
	  if(s[i].xb=='Y'&&s[i].qm>85) s[i].jj=s[i].jj+1000;
	  if(s[i].py>80&&s[i].gb=='Y') s[i].jj=s[i].jj+850;
		sum=sum+s[i].jj;
		a[i]=i;
		}
	pai(s,n,a);
	printf("%s\n",s[a[0]].name);
	printf("%d\n",s[a[0]].jj);
	printf("%d",sum);	
	
	
	return(0);
}
void pai(struct stu s[],int n,int a[])
{ int t=0;
  int i=0,j=0;
  for(i=0;i<n;i++)
   {for(j=0;j<n-i-1;j++)
      { if(s[a[j]].jj<s[a[j+1]].jj)
         { t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
				}
			}
		}
}