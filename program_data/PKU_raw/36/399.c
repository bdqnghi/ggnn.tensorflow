int comp(char s1[],char s2[],int j,int i)
{
	if(s1[j]==s2[i])
	{s2[i]=0;return(1);}
	else if((s1[j]!=s2[i])&&(i>0))
		{i=i-1;return(comp(s1,s2,j,i));}
	else if((s1[j]!=s2[i])&&(i==0))
	return(0);
}
void main()
{int i,j,k,y,u;
 char str1[100],str2[100],c;
 for(i=0;(c=getchar())!=' ';i++)
	 str1[i]=c;
 gets(str2);
 i=i-1;
 j=strlen(str2)-1;
 if(i!=j)
 printf("NO");
 else 	{u=i; 
	 for(k=0,y=0;k<=u;k++)
		 if(comp(str1,str2,k,i)==0)
		 {y=1;break;}
	 if(y==0) printf("YES");
	 else if(y==1) printf("NO\n");}
}
