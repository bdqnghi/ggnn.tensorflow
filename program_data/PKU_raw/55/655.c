const int size=10000; //??????
char inda[size],outda[size];
int indata[size],t,ans[2*size],lans,ddd[size];//?????????
int main()        //?????
{
    int i,j,inbase,outbase,la,ld;
    int map[300];char rmap[65];
    for(i='A';i<='Z';i++) {map[i]=i-'A'+10;rmap[i-'A'+10]=i;}//??????????????????

    for(i='a';i<='z';i++) {map[i]=i-'a'+10;rmap[i-'a'+37]=i;}
    for(i='0';i<='9';i++) {map[i]=i-'0';rmap[i-'0']=i;}
   
    
        cin>>inbase>>inda>>outbase; //??
      
        la=strlen(inda);lans=0;ld=0;
        for(i=0;i<la;i++)
            indata[i]=map[inda[i]];
        while(true)
        {
            if(la==1&&indata[0]<outbase){ans[lans++]=indata[0];break;}
			if(inda[0]=='0'){ cout<<"0";break;}
            for(i=0;i<la-1;i++)//??????

            {
                ddd[ld++]=indata[i]/outbase;
                t=indata[i]%outbase;
                indata[i+1]+=t*inbase;
            }
            ddd[ld++]=indata[i]/outbase;//????

            ans[lans++]=indata[i]%outbase;//??????????

            for(i=0;i<ld;i++)//??????0

                if(ddd[i]) break;
            for(j=0;i<ld;i++,j++)//?????????

                indata[j]=ddd[i];
            la=j;ld=0;//?????

        }
        for(i=0;i<lans;i++)//???????????????????

            outda[i]=rmap[ans[i]];
       
         for(i=lans-1;i>=0;i--)cout<<outda[i];
     
      return 0;
 }   
    


