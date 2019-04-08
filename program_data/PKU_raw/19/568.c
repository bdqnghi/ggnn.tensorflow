
void main()
{
	char sen[100],targ[100],subs[100];
	gets(sen);	gets(targ);	gets(subs);	
	char *p,*q,*c,*t;			//c points to targ, p and q points to sen
	int flag=0;
	p=sen;
	c=targ;
	char output[100]={0};
	while(p<sen+strlen(sen)){
		c=targ;
		while( *p++ != targ[0] )
			;
		q=p-1;
		if( q!=sen && *(q-1) != ' ')
			continue;
		p--;
		while( *c && *p++ == *c++  )
			;
		if( (*p==' ' || *p==0) && *c==0)
			flag=1;
		if(flag){
			t=p;
			output[0]=0;
			strncpy(output,sen,q-sen);
			output[q-sen]=0;
			strcat(output,subs);
			strcat(output,t);
			strcpy(sen,output);
			p=sen;
		}
		
	}
	if(!flag){
		puts(sen);exit(0);
	}
			//A0 + SUB +A1, c->betw SUB & A1,q->betw A0 & SUB
	
	puts(output);

}