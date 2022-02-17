int dd=0,hh=0,mm=0,ss=0,flag=0;
int select()
{
    switch(getch())
    {
    case 49:
        flag=0;
        break;
    case 50:
        flag=1;
        break;
    case 51:
        dd=hh=mm=ss=0;
        flag=1;
        printtime();
        break;
    case 52:
        exit(0);;
        break;

    }
}