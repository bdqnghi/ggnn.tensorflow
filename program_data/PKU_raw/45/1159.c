int main()
{
    char z1[51],z2[51],z3[51];
    int i,result,n1,n2,k,p;
	char z4[2]=" ";
    scanf("%s %s", z1,z2);
    n1=strlen(z1);
    n2=strlen(z2);
    p=0;
    for(i=0;i<=n2-n1;i++)
    { 
        
        for(k=0;k<n1;k++)
		{
            z3[k]=z2[i+k];
       	}
         z3[k]='\0';
    	result=strcmp(z3,z1);		

    	if((result==0)&&(p==0))
		{
            printf("%d",i);
            p=1;
            result=1;
		}else if(p==0)
	           continue;
	    else break;
		   
    }
    return 0;
}