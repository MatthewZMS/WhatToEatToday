#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main();

void meal_0()
{
    int j;
    for(j = 0; j <= 7; j++)
    {
        cout<<'\n';
    }
    cout<<"                               五谷鱼粉                               "<<'\n'<<endl;
    cout<<"                          5 grain fish noodle                         "<<'\n'<<endl;
    system("pause");
    main();
}

void meal_1()
{
    int j;
    for(j = 0; j <= 7; j++)
    {
        cout<<'\n';
    }
    cout<<"                            老成都面馆                                "<<'\n'<<endl;
    cout<<"                        old chengdu noodle                            "<<'\n'<<endl;
    system("pause");
    main();
}

void meal_2()
{
    int j;
    for(j = 0; j <= 7; j++)
    {
        cout<<'\n';
    }
    cout<<"                                饭堂                                  "<<'\n'<<endl;
    cout<<"                              eat shit                                "<<'\n'<<endl;
    system("pause");
    main();
}

void meal_3()
{
    int j;
    for(j = 0; j <= 7; j++)
    {
        cout<<'\n';
    }
    cout<<"                               东北菜                                 "<<'\n'<<endl;
    cout<<"                           north-east food                            "<<'\n'<<endl;
    system("pause");
    main();
}

void meal_4()
{
    int j;
    for(j = 0; j <= 7; j++)
    {
        cout<<'\n';
    }
    cout<<"                            不吃了，减肥！                            "<<'\n'<<endl;
    cout<<"                         I'm so f**king fat!                          "<<'\n'<<endl;
    system("pause");
    main();
}

void food(int n)
{
    int i;
    i = n;
    switch(i)//跳转到不同的餐食
    {
    case 0:
        meal_0();
        break;
    case 1:
        meal_1();
        break;
    case 2:
        meal_2();
        break;
    case 3:
        meal_3();
        break;
    case 4:
        meal_4();
        break;
    default:
        break;
    }
}

void main_display()//主页显示
{
    cout<<'\n'<<'\n'<<'\n'<<endl;
    cout<<"     /***---------------------今天吃什么---------------------***/     "<<'\n'<<endl;
    cout<<"                        What for meal today?                          "<<'\n'<<endl;
    cout<<'\n'<<'\n'<<endl;
    cout<<"        【1 开始选择】                                【0 退出】      "<<endl;
}

void make_choice()
{
    system("cls");
    int n;
    /*用于生成指定范围的随机数*/
    srand((unsigned)time(NULL));
    n = rand()%5 + 0;//rand()%(n-m+1)+m
    food(n);//跳转
}
void loading()//跳转，用于拖时间
{
    system("cls");
    int j;
    for(j = 0; j <= 7; j++)
    {
        cout<<'\n';
    }
    cout<<"                             正在选择...                              "<<'\n'<<endl;
    cout<<"                              Loading...                              "<<'\n'<<endl;
    _sleep(2000);
    make_choice();
}
int main()
{
    system("mode con cols=70 lines=20");
    system("color F0");
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
    CursorInfo.bVisible = false; //隐藏控制台光标
    SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
    main_display();
    char ch;
    ch = getch();
    if(ch == '1')
        loading();
    else if(ch == '0') exit(1);
    else
    {
        system("cls");
        cout<<"输入有误！！"<<endl;
    }
    return 0;
}
