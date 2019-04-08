//*************************************************************************
//???????????????????????????????????  *
// ???????????????????????????????0?bug?
//????????????                                                *
//*************************************************************************
//*************************************************************************
const int size=500;
char inda[size],outda[size];
int indata[size],yu[2*size],ddd[size];
int main()               //?????
{
    int i,j,k;double inbase,outbase,la,dec=0;
    int map[300];char rmap[65];
    for(i='A';i<='Z';i++) {map[i]=i-'A'+10;rmap[i-'A'+10]=i;}//??????????????????

    for(i='a';i<='z';i++) {map[i]=i-'a'+10;rmap[i-'a'+36]=i;}
    for(i='0';i<='9';i++) {map[i]=i-'0';rmap[i-'0']=i;}
	cin>>inbase>>inda>>outbase;
	la=strlen(inda);           
	for(i=0;i<=la-1;i++){indata[i]=map[inda[i]];}
	for(i=0;i<=la-1;i++){dec=dec+indata[i]*pow(inbase,la-i-1);}
	ddd[0]=dec;i=0;    //??????????????
   while(true)
   {if(i>0&&ddd[i]==0) break;
	   ddd[i+1]=ddd[i]/outbase;
   yu[i]=ddd[i]%(int)outbase;i++; }    
   yu[i]=ddd[i]%(int)outbase;    //????
  for(j=0;j<=i;j++)              
  {outda[j]=rmap[yu[j]];}     
  for(k=i-1;k>=0;k--)
	  cout<<outda[k];         //??

  return 0;
}
  
    