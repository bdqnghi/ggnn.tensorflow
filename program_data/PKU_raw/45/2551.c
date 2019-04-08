int check(char *cf,char *cs,int l)
{int flag=7,i;
 for (i=0;i<l;i++,cf++,cs++)
     if (*cf!=*cs) flag=0;
 return flag;
}
int main()
{int i=-1,j,k,l,n,m,flag=0;
 char cf[500]={' '},cs[500]={' '};
 scanf("%s%s",cs,cf);
 while (flag!=7)
 {   i++; 
	 flag=check(cf+i,cs,strlen(cs));
 }
 printf("%d",i);
 return 7;

}
