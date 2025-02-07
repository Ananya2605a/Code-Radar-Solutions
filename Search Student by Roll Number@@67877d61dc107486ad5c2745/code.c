struct ad
{
    int r;
    char n[20];
    float m;
};
int main()
{
    int N,a,b;
    scanf("%d",&N);
    struct ad e[20];
    for(a=0;a<N;a++)
    {
        scanf("%d",&e[a].r);
        scanf("%s",e[a].n);
        scanf("%f",&e[a].m);

    }
    for(a=0;a<N;a++)
    {
        scanf("%d",&b);
    }
    for(a=0;a<N;a++)
    {
        if(b==e[a].r)
        printf("Roll Number: %d, Name: %s, Marks: %.2f",e[a].r,e[a].s,e[a].m);
        else
        printf("Student not found");
    }
    
}