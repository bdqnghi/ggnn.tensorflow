


int min(int x,int y)
{
	int z;
	if(x<y) z=x;
	else z=y;
	return (z);
}


void main ()
{
	 int h,i,j,k,l,a,b,temp,flag1,flag2;
	 int f[100][100];
	
	 
	 scanf("%d%d",&a,&b);

	 for(i=0;i<a;i++)
	 {
		 for(j=0;j<b;j++)
		 {
			 scanf("%d",&f[i][j]);
		 }
	 }

	 temp=min(a,b);
	 
	 for(i=0;((a-2*i)>0&&(b-2*i)>0);i++)
	 {
		 flag1=0;
		 flag2=0;                                                                                                
		 if((a-2*i)==1) flag1=1;
		 if((b-2*i)==1) flag2=1;
		 
		 /*first heng*/
		 for(j=i;j<b-i;j++)
		 {
			 
			 printf("%d\n",f[i][j]);
		 }
		 
		 /*first shu*/
		 for(j=i+1;j<a-i-1;j++)
		 {
			
			 printf("%d\n",f[j][b-1-i]);
		 }

		 /*second heng*/
		 for(j=b-1-i;j>i-1;j--)
		 {
			 if(flag1==1)break;
			 printf("%d\n",f[a-1-i][j]);
		 }
		 
		 
		 /*second shu*/
		 for(j=a-2-i;j>i;j--)
		 { 
			 if(flag2==1)break;
			 printf("%d\n",f[j][i]);
		 }
	 }
}


