

int main(int argc, char *argv[])
{
    char s1[1000]={0},getchar[1000]={0};
    int getnum[1000]={0},i,j=0;
    cin.getline(s1,1000);
    for(i=0;i<1000;i++)
    {
                       if(s1[i]=='\0') break;
                       if(s1[i]>='a'&&s1[i]<='z') s1[i]=s1[i]-32;  //??????? 
                       if(s1[i]!=getchar[j]) //?????? 
                       {
                                             j++; //?1?? 
                                            getchar[j]=s1[i];
                                            getnum[j]++; 
                       }
                       else getnum[j]++;
    }
    for(i=1;i<=j;i++)
    {
                     cout<<"("<<getchar[i]<<","<<getnum[i]<<")";
    }
    return EXIT_SUCCESS;
}
