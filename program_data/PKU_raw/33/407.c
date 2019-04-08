int main()
{
    int n;
    int t;
	char dna[10000],hbl[10000];
    scanf("%d",&n);
    for(t=0;t<n;t++){
                     
                     int i,k=0;
                     for(i=0;i<10000;i++){
                                         dna[i]='0';
                                         }
                     scanf("%s",dna);
                     for(i=0;i<10000;i++){
                                         if(dna[i]!='0'){
                                                         k++;
                                                         }
                                         }
                                                         
                     for(i=0;i<k;i++){
                                         if(dna[i]=='A'){
                                                         hbl[i]='T';
                                                         }
                                         if(dna[i]=='T'){
                                                         hbl[i]='A';
                                                         }
                                         if(dna[i]=='G'){
                                                         hbl[i]='C';
                                                         }
                                         if(dna[i]=='C'){
                                                         hbl[i]='G';
                                                         }
                                         }
                     hbl[k-1]='\0';
		   printf("%s\n",hbl);		
	}               
    return 0;
}         
