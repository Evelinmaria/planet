void main()
{
    int n, i, r[10], v[10] ,N,d[10];
    scanf("%d",&n);
    
    scanf("%d",&r[i]);
    
    scanf("%d",&v[i]);
    
    scanf("%d",&N);
    for(i=0;i<3;i++)
    {
        d[i] = N*v[i];
    }
    if(d[1]==d[2] && d[1] == d[2] && d[2]==d[3]){
        printf("True");
    }
    else{
        printf("false");
    }
}
