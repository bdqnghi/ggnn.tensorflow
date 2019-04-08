int sum[25];
int main()
{
    int k=0;
	char str[300],*ps;
	scanf("%s",str);
	int ii = 0;
	char *aa;
	aa=(char*)malloc(sizeof(char)*27);
	*aa='a';
	*(aa+1)='b';
	*(aa+2)='c';
   *(aa+3)='d';
*(aa+4)='e';
*(aa+5)='f';
*(aa+6)='g';
*(aa+7)='h';
*(aa+8)='i';
*(aa+9)='j';
*(aa+10)='k';
*(aa+11)='l';
*(aa+12)='m';
*(aa+13)='n';
*(aa+14)='o';
*(aa+15)='p';
*(aa+16)='q';
*(aa+17)='r';
*(aa+18)='s';
*(aa+19)='t';
*(aa+20)='u';
*(aa+21)='v';
*(aa+22)='w';
*(aa+23)='x';
*(aa+24)='y';
*(aa+25)='z';
for(ii=0;ii<26;ii++){
	for(ps=str;*ps!='\0';ps++){
		if(*ps==*(aa+ii)){
			sum[ii]++;
			k=1;
		}
	}
	if(k==1){
       if(sum[ii]==0) continue;
       else if(sum[ii]!=0)  printf("%c=%d\n",*(aa+ii),sum[ii]);
	}
}
if(k!=1) printf("No");
return 0;
}
	
	

