int main()
{
    int afan,bfan,cfan,i,aword,bword,cword;//afan?bfan?cfan??????????? ,aword,bword,cword?????? 
    char rank[4];//???? 
    for(afan=1;afan<=3;afan++)
    { 
       for(bfan=1;bfan<=3;bfan++)
       { 
          if (afan==bfan) continue;//?????? 
             for(cfan=1;cfan<=3;cfan++)
                {
                                      if ((afan==cfan)||(bfan==cfan)) continue;
                                      aword=(bfan<afan)+(cfan==afan)+1;
                                      bword=(afan<bfan)+(afan<cfan)+1;
                                      cword=(cfan<bfan)+(bfan<afan)+1;
                                      if ((afan==aword)+(bfan==bword)+(cfan==cword)==3)
                                      {
                                            rank[afan]='A';
                                            rank[bfan]='B';
                                            rank[cfan]='C';
                                      }
                }
       }
    }
    for(i=3;i>0;i--) cout<<rank[i];
    return 0;
}
