#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void ending(int money, int happiness)
{

    cout << endl << endl << endl;
    cout << "당신의 운명이 결정됩니다!";
    cout << endl;
    if(money > 30 && happiness > 30) // money 30 over , happiness 30 over
    {
        cout << "당신은 성공적인 삶을 살았습니다.";
    }
    else if(money <= 30 && happiness > 30) // money 30 down, happiness 30 over
    {
        cout << "당신은 금전적으로는 부족했지만, 본인 스스로 만족하는 삶을 살았습니다.";
    }
    else if(money > 30 && happiness <= 30) // money 30 over, happiness 30 down
    {
        cout << "당신은 금전적으로는 부족하지 않았지만, 심리적으로 불우한 삶을 살았습니다.";
    }
    else if(money <= 30 && happiness <= 30) // money 30 down, happiness 30 down
    {
        cout << "당신은 불우한 삶을 살았습니다...";
    }
};

int main(void)
{
    int n;
    int money = 0;
    int happiness = 0;
    int homepay;
    int househappiness;
    int income;
    int frd;

    cout << "이 게임은 행복도, 재산의 수치에 따라 엔딩이 결정됩니다.";
    cout << endl;
    cout << "***************   인생게임을 시작합니다!   ****************";

    cout << endl << endl << endl;

    //select 1
    cout << "당신의 가정이 부유하다면 1번, 당신의 가정이 불우다면 2번을 선택해주세요.";
    cout << endl;
    cin >> homepay;
    cout << "선택의 결과: ";
    if(homepay == 1)
    {
        cout << "당신의 가정은 부유한 환경이였고, 그에따라 당신의 자산은 많이 모였습니다.";
        money += 50;
    }
    else if(homepay == 2)
    {
        cout << "당신의 가정은 불우한 환경이였고, 그에따라 당신의 자산은 많이 모이지 못했습니다.";
        money -= 50;
    }

    cout << endl << endl << endl;

    //select 2
    cout << "당신의 가정이 화목하다면 1번, 당신의 가정이 화목하지 않았다면 2번을 선택해주세요.";
    cout << endl;
    cin >> househappiness;
    cout << "선택의 결과: ";
    if (homepay == 1)
    {
        cout << "당신의 가정은 화목한 환경이였고, 당신은 행복한 유년기를 보냈습니다.";
        happiness += 50;
    }
    else if (homepay == 2)
    {
        cout << "당신의 가정은 불우한 환경이였고, 당신은 불우한 유년기를 보냈습니다.";
        happiness -= 50;
    }

    cout << endl << endl << endl;

    //select 3
    cout << "당신의 소득이 높다면 1번, 낮다면 2번을 선택해주세요.";
    cout << endl;
    cin >> income;
    cout << "선택의 결과: ";
    if(income == 1)
    {
        cout << "당신은 많은 자산을 축적했습니다.";
        money += 20;
    }
    else if(income == 2)
    {
        cout << "당신은 많은 자산을 축적하지 못했습니다...";
        money -= 20;
    }

    cout << endl << endl << endl;

    //select 4
    cout << "당신이 좋은 교우관계를 가졌다면 1번, 아니라면 2번을 선택해 주세요.";
    cout << endl;
    cin >> frd;
    cout << "선택의 결과: ";
    if (frd == 1)
    {
        cout << "당신은 좋은 친구를 두었습니다.";
        happiness += 20;
    }
    else if (frd == 2)
    {
        cout << "당신은 친구에게 보증을 서줬지만 친구는 그 믿음에 배신했습니다..";
        money -= 40;
    }


    ending(money, happiness);
    return 0;
}