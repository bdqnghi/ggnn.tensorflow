int main()
{
char str[501];
int a,c,i,j,m,n,temp;
gets(str);
c=strlen(str);
for (i=1;i<=c;i++){
        for (j=0;j<c-i;j++)
        {
			temp=0;m=j;n=j+i;
	        while (m<n){
		                    if (str[m]==str[n]){m++;n--;}
		                    else {temp=0;break;}
							temp=1;
			}
	        if (temp==1){
		       for(a=j;a<=i+j;a++)printf("%c",str[a]);
			   printf("\n");
			}
		}
}
return 0;
}
