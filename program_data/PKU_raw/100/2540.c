
void main()
{
	char s[301],c;
	int numx[30]={0},numd[30]={0},len,j,i,count=0;

	gets(s);
	len=strlen(s);
	for(j=0;j<len;j++){
		if(s[j]>=65&&s[j]<=90)
  numd[ s[j]-65 ]++;
		else if(s[j]>=97&&s[j]<=122)
			numx[ s[j]-97 ]++;
	}
	
 c=65;
	for(i=0;i<26;i++,c++){
     
		if( numd[i]!=0 )
			            {printf ("%c=%d\n",c,numd[i]);
			            count=1;}
                        }
                        c=97;
		for(i=0;i<26;i++,c++){
      
		if( numx[i]!=0 )
			            {printf ("%c=%d\n",c,numx[i]);
			            count=1;}
                        }
if (count==0)
printf ("No");

}
