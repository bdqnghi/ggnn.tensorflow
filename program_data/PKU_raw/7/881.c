

int bd(char *hed,char *zi,int m)
{
	int val=0,j;
	char *t1,*t2;
	for(t1=hed,t2=zi,j=0;j<m;t1++,t2++,j++)
	{if(*t1==*t2)val=1;
	else {val=0;break;}
}
	return(val);
}
void main()
{
	char *yuan,*zi,*rep,*med;
	yuan=(char *)malloc(260*sizeof(char));
	zi=(char *)malloc(260*sizeof(char));
	rep=(char *)malloc(260*sizeof(char));
	med=(char *)malloc(260*sizeof(char));

	gets(yuan);
	gets(zi);
	gets(rep);

	char *p;
	int n,m,zhi=0,t;
		
	for(p=yuan,n=0;*p!='\0';p++,n++);
	for(p=zi,m=0;*p!='\0';p++)m++;
	for(p=rep,t=0;*p!='\0';p++)t++;

	/*?????????*/

    /*????*/
	for(p=yuan;p<yuan+n-m+1;p++)
	if(bd(p,zi,m)==1){zhi=1;break;}
   
		if(zhi==1){strcpy(med,p+m);
                strcpy(p,rep);
				strcpy(p+t,med);}
	puts(yuan);

}
