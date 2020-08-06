main(int argc,char *argv[])
{
    int i,min,j;
    min=atoi(argv[1]);
    for(i=2;i<argc;i++)
    {
        j= atoi(argv[i]);
        if(j==0)
        {
            printf("Enter a numeric value you cannot enter %s\n",argv[i]);
        }
        else
        {
            if(min>j)
                min=j;
        }
    }
    printf("Minimum Number is %d",min);
    getch();
}
