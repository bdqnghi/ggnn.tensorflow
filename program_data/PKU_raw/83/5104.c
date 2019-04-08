int main(){
    int i=0,core[10],j[10],k;
    char o[10];
    int all=0,alle=0;
    scanf("%d",&k);
    for(i=0;i<=k-1;i++){
        scanf("%d ",&j[i]);}

    for(i=0;i<=k-1;i++){
        scanf("%d",&core[i]);}

    for(i=0;i<=k-1;i++){
        if(core[i]<=100&&core[i]>=90)
            {core[i]=40;continue;}
        if(core[i]<=89&&core[i]>=85)
            {core[i]=37;continue;}
        if(core[i]<=84&&core[i]>=82)
           { core[i]=33;continue;}      
        if(core[i]<=81&&core[i]>=78)
           {core[i]=30; continue;}    
        if(core[i]<=77&&core[i]>=75)
           { core[i]=27;continue;}   
        if(core[i]<=74&&core[i]>=72)
           { core[i]=23;continue;}  
        if(core[i]<=71&&core[i]>=68)
           { core[i]=20;continue;}   
        if(core[i]<=67&&core[i]>=64)
           { core[i]=15;continue;}
        if(core[i]<=63&&core[i]>=60)
           { core[i]=10;continue;}
        if(core[i]<=59&&core[i]>=0)
            {core[i]=0; continue;}   
    }

    for(i=0;i<=k-1;i++)
        alle=alle+core[i]*j[i];

    for(i=0;i<=k-1;i++)
        {all=all+j[i];}

        printf("%.2lf",1.0*alle/10/all);
        
        
return 0;
}

