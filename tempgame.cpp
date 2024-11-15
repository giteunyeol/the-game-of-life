#include <iostream>
using namespace std;

int job[30] = {0};

// 배열에서 최댓값을 찾는 함수
int findMaxValue()
{
    int maxValue = job[0];
    for (int i = 1; i < 25; i++)
    {
        if (job[i] > maxValue)
        {
            maxValue = job[i];
        }
    }
    return maxValue; // 최댓값 반환
}

// 최댓값을 가진 모든 인덱스의 직업을 출력하는 함수
void ending(int maxValue)
{
    cout << "당신의 추천 직업은 다음과 같습니다!\n";

    for (int i = 0; i < 25; i++)
    {
        if (job[i] == maxValue)
        { // 최댓값과 동일한 job[i] 출력
            switch (i)
            {
            case 0:
                cout << "- 섬 관리자(자연 분야)\n";
                cout << "섬 관리자는 섬의 자연 자원과 생태계를 보호하고 지속 가능하게 관리하는 역할을 맡고 있습니다.\n";
                cout << "주민과의 소통을 통해 지역 사회 발전 을 지원하며, 관광 자원을 개발하고 환경 교육을 실시합니다.\n";
                cout << "또한, 자연재해에 대비한 비상 관리와 장기 발전 계획을 수립하는 업무를 수행합니다.\n";
                cout << endl;
                break;
            case 1:
                cout << "- 포춘쿠키 작가(인문 분야)\n";
                cout << "포춘쿠키 작가는 사람들에게 긍정적이고 영감을 주는 메시지를 담은 짧은 글을 작성하는 일을 합니다.\n";
                cout << " 이들은 주로 창의적이고 재치 있는 문구를 만들어, 다양한 상황에 맞는 메시지를 제공합니다.\n";
                cout << "또한, 고객의 요구에 맞춰 맞춤형 메시지를 작성하기도 합니다.\n";
                cout << endl;
                break;
            case 2:
                cout << "- 애완동물 변호사(인문 분야)\n";
                cout << " 애완동물 변호사는 애완동물과 관련된 법적 문제를 전문적으로 다루는 변호사입니다.\n";
                cout << "이들은 동물 학대, 소유권 분쟁, 애완동물의 권리와 복지에 관한 사건을 처리하며, 법원에서 클라이언트를 대리합니다.\n";
                cout << "또한, 애완동물 관련 법률 및 정책 개선을 위한 자문과 교육도 제공합니다.\n";
                cout << endl;
                break;
            case 3:
                cout << "- 평판관리 전문가(사회 분야)\n";
                cout << "평판관리 전문가는 개인이나 기업의 온라인 및 오프라인 평판을 모니터링하고 관리하는 역할을 합니다.\n";
                cout << "이들은 부정적인 정보나 이미지의 확산을 방지하고, 긍정적인 이미지를 구축하기 위해 전략을 수립합니다. \n";
                cout << "또한, 위기 상황 발생 시 신속하게 대응하여 평판을 회복하는 데 도움 을 줍니다.\n";
                cout << endl;
                break;
            case 4:
                cout << "- 국제개발 협력 전문가(사회 분야)\n";
                cout << "국제개발 협력 전문가 국제개발 협력 전문가는 개발도상국의 경제적, 사회적 발전을 지원하기 위한 프로젝트를 기획하고 실행합니다. \n";
                cout << "이들은 정부, 비정부기구, 국제기구와 협력하여 자원과 기술을 효과적으로 배분하고 문제 해결을 위한 전략을 마련합니다.\n";
                cout << "또한, 개발 성과를 평가하고 지속 가능 한 발전을 위한 정책 제안을 합니다.\n";
                cout << endl;
                break;
            case 5:
                cout << "- 주변환경 정리 전문가(자연 분야)\n";
                cout << "주변환경 정리 전문가는 개인이나 기업의 공간을 효율적으로 정리하고 정돈하는 서비스를 제공합니다.\n";
                cout << "이들은 물건의 분류, 정리 및 보관 방법을 제안하여 고객의 생활 공간을 개선하고 스트레스를 줄이는 데 도움을 줍니다.\n";
                cout << "또한, 지속 가능한 정리 습관을 기르도록 교육하고 코 칭하는 역할도 수행합니다.\n";
                cout << endl;
                break;
            case 6:
                cout << "- 빗물 사용 전문가(자연 분야)\n";
                cout << "빗물 사용 전문가는 빗물을 수집하고 효율적으로 활용하기 위한 시스템을 설계하고 구현하는 역할을 합니다. \n";
                cout << "이들은 빗물 저장, 정화 및 재사용 방안을 제안하여 물 자원을 절약하고 환경 보호에 기여합니다.\n";
                cout << "또한, 관련 법규 및 정책을 준수하며, 교육 및 홍보 활동을 통해 빗물 사용의 중요성을 알리는 업무도 수행합니다.\n";
                cout << endl;
                break;
            case 7:
                cout << "- 스마트 재난 관리 전문가(사회 분야)\n";
                cout << "스마트 재난관리 전문가는 최신 기술을 활용하여 재난 예방, 대응 및 복구 시스템을 개발하고 운영합니다.\n";
                cout << "이들은 데이터 분석, IoT, 드론 및 인공지능을 통해 재난 상황을 실시간으로 모니터링하고, 효과적인 대응 전략을 수립합니다.\n";
                cout << "또한, 정부 및 관련 기관과 협력하여 재 난 관리 정책을 개선하고, 시민 교육 및 훈련 프로그램을 운영합니다.\n";
                cout << endl;
                break;
            case 8:
                cout << "- 재활용 코디네이터(자연 분야)\n";
                cout << "재활용 코디네이터는 재활용 프로그램을 계획하고 실행하여 자원 순환을 촉진하는 역할을 합니다.\n";
                cout << "이들은 지역 사회와 기업에 재활용의 중요성을 교육하고, 효과적인 재활용 시스템을 구축하기 위해 협력합니다.\n";
                cout << "또한, 재활용 데이터 분석을 통해 성과를 평가하고 개선 방안을 제시 합니다.\n";
                cout << endl;
                break;
            case 9:
                cout << "- 애완동물 탐정(예체능 분야)\n";
                cout << "애완동물 탐정은 실종된 애완동물을 찾기 위해 수사 및 조사 작업을 수행하는 전문가입니다. \n";
                cout << "이들은 현장 조사, 증거 수집 및 애완동물 의 행동 분석을 통해 실종 경위를 파악하고 주인과 협력합니다.\n";
                cout << "또한, 애완동물의 안전을 위한 예방 조치 및 관리 방법도 제안합니다.\n";
                cout << endl;
                break;
            case 10:
                cout << "- 잠수함 요리사(예체능 분야)\n";
                cout << "잠수함 요리사는 잠수함 내에서 승무원과 승객을 위한 식사를 준비하고 제공하는 역할을 합니다.\n";
                cout << "이들은 제한된 공간과 자원 속에서 영양가 있는 식사를 계획하고 조리하며, 다양한 요리를 창의적으로 만들어야 합니다.\n";
                cout << "또한, 식사 준비와 위생 관리를 철저히 하여 안전한 식사를 보장하 는 업무를 수행합니다.\n";
                cout << endl;
                break;
            case 11:
                cout << "- 인형의사(예체능 분야)\n";
                cout << "인형의사는 인형이나 봉제 인형을 수리하고 복원하는 전문가입니다. \n";
                cout << "이들은 손상된 부분을 수선하고, 인형의 외관을 개선하며, 때때로 특별 한 요청에 따라 맞춤형 수리를 진행합니다. \n";
                cout << "또한, 인형의 역사나 가치에 대한 상담을 제공하여 소중한 기억을 지키는 데 도움을 줍니다.\n";
                cout << endl;
                break;
            case 12:
                cout << "- 디지털장의사(공학 분야)\n";
                cout << "디지털 자산이나 개인의 온라인 존재를 관리하거나 정리하는 일을 전문으로 하는 사람 또는 서비스를 일컫습니다.\n";
                cout << "이 개념은 디지털 시대에서 사람들의 온라인 데이터, 계정, 파일 등이 삶의 끝 이후에도 남아 있을 수 있기 때문에 이를 정리하거나 처리하는 역할을 의미합니다.\n";
                cout << " 디지털 장의사는 사망한 사람의 디지털 자산을 처리하거나, 살아있는 사람의 디지털 자산을 정리하거나 보관하는 역할을 합니다.\n";
                break;
            case 13:
                cout << "- 자유의여신상 횃불 관리자(공학 분야)\n";
                cout << "자유의 여신상이 들고 있는 횃불은 수많은 유리창과 램프로 이루어져 있습니다.\n";
                cout << "전기등으로 밝히는 횃불이 꺼지지 않도록 관리하는 사람이 바로'자유의 여신상 횃불 관리자' 입니다.\n";
                break;
            case 14:
                cout << "- 베타테스터(공학 분야)\n";
                cout << "베타테스터(Beta Tester)는 소프트웨어나 게임, 애플리케이션 등의 제품이 정식 출시되기 전에 베타 버전을 테스트하는 사람을 의미합니다.\n";
                cout << " 베타 테스트는 제품 개발의 마지막 단계 중 하나로, 실제 사용 환경에서의 버그나 문제를 발견하고, 사용자 경험을 평가하는 중요한 과정입니다.\n";
                cout << " 베타테스터는 이러한 테스트를 통해 제품을 미리 사용해 보고, 개발 팀에 피드백을 제공하는 역할을 합니다.\n";
                break;
            case 15:
                cout << "- 로봇의상디자이너(공학 분야)\n";
                cout << "로봇 의상 디자이너는 로봇의 외형을 설계하고, 로봇을 위한 의상이나 외장(외관)을 디자인하는 전문가입니다.\n";
                cout << "이 직업은 일반적인 의상 디자인과는 달리, 로봇의 기능적 요구사항과 디자인, 그리고 사용 환경을 고려하여 기술적이고 창의적인 작업을 요구합니다.\n";
                cout << "로봇 의상 디자이너는 주로 로봇 공학, 패션 디자인, 기계 공학, 인공지능 등의 분야를 결합하여 작업합니다.\n";
                break;
            case 16:
                cout << "- 포옹전문가(교육 분야)\n";
                cout << "포옹 전문가(Hugging Specialist)는 일반적으로 포옹의 중요성, 기술, 그리고 심리적, 정서적 효과에 대해 잘 알고 이를 적극적으로 활용하는 전문가를 의미합니다.\n";
                cout << "이러한 직업은 전통적인 의미에서는 다소 생소할 수 있지만, 다양한 분야에서 실제로 포옹의 유익을 연구하거나 활용하는 전문가들이 존재합니다.\n";
                cout << "특히 정신 건강, 심리학, 스트레스 관리, 사회적 상호작용 등에 관한 전문 지식과 기술을 바탕으로 심리적 안정과 감정적 지원을 제공하는 사람들을 가리킬 수 있습니다.\n";
                break;
            case 17:
                cout << "- 입냄새평가원(교육 분야)\n";
                cout << "입냄새 평가원은 단순히 구강 건강뿐만 아니라, 입냄새가 발생하는 다양한 원인에 대해 평가하고 해결책을 제시하는 전문가 역할을 합니다.\n";
                cout << " 구강 건강, 심리적 요인, 사회적 관계 등을 종합적으로 고려하여 입냄새의 원인을 파악하고, 사람들의 삶의 질을 향상시키는 데 기여하는 중요한 직업입니다.\n";
                break;
            case 18:
                cout << "- 밈교육강사(교육 분야)\n";
                cout << "밈 교육 강사라는 직업은 다소 특이하고 새롭게 등장한 개념일 수 있지만, 인터넷 문화, 소셜 미디어, 디지털 커뮤니케이션의 발전에 따라 점차 중요성이 커지고 있는 분야입니다.\n";
                cout << "밈(Meme)은 원래 문화적, 사회적 의미를 담은 정보의 단위로, 유머나 사회적 메시지를 전달하는 데 사용됩니다.\n";
                cout << " 밈 교육 강사는 이러한 밈을 효과적으로 이해하고 활용하는 방법을 가르치는 전문가로, 특히 디지털 교육, 소셜 미디어 활용, 창의적 커뮤니케이션 등의 분야에서 중요한 역할을 합니다.\n";
                break;
            case 19:
                cout << "- 안경사(의학 분야)\n";
                cout << "안경사는 안경과 관련된 다양한 서비스를 제공하는 전문가입니다.\n";
                cout << " 안경사는 주로 시력 검사, 맞춤형 안경 처방, 안경 조정 등을 담당하며, 사람들의 시력 문제를 해결하고 시각적 편안함을 제공합니다.\n";
                cout << "안경사는 의료적이거나 테크니컬한 전문성을 가진 직업으로, 일반적으로 안경점이나 안과 병원에서 근무합니다.\n";
                break;
            case 20:
                cout << "- 로봇수술전문가(의학 분야)\n";
                cout << "로봇 수술 전문가(Robotic Surgery Specialist)는 로봇 기술을 활용하여 수술을 수행하는 의료 전문가입니다.\n";
                cout << "로봇 수술은 의사가 로봇 시스템을 원격으로 조정하여 수술을 진행하는 방식으로, 정밀도, 효율성, 회복 시간 단축 등 여러 가지 장점이 있어 현재 많은 분야에서 활용되고 있습니다.\n";
                break;
            case 21:
                cout << "- 유전자상담사(의학 분야)\n";
                cout << "유전자 상담사(Genetic Counselor)는 유전자와 관련된 건강 정보를 제공하고, 이를 바탕으로 의료 결정을 내리도록 돕는 전문가입니다.\n";
                cout << "유전자 상담사는 유전적 질병이나 상태에 대한 위험을 평가하고, 개인이나 가족이 유전학적 정보를 어떻게 이해하고 활용할 수 있는지에 대해 안내합니다.\n";
                cout << "주로 유전 질환이나 유전자 검사와 관련된 상담을 진행하며, 가족력이나 건강 위험 요소를 분석하여, 적절한 예방과 치료 방법을 제시합니다.\n";
                break;
            case 22:
                cout << "- 노화방지 전문가(의학 분야)\n";
                cout << "노화 방지 전문가(Anti-Aging Specialist)는 노화의 과정과 그에 따른 건강 문제를 예방하고 지연시키기 위한 과학적 접근법을 연구하고 적용하는 전문가입니다.\n";
                cout << "노화 방지 전문가의 목표는 건강한 노화를 촉진하고, 사람들이 더 오랜 시간 동안 활기차고 건강한 삶을 살 수 있도록 돕는 것입니다.\n";
                cout << "이를 위해 유전학, 영양학, 운동, 호르몬 요법, 심리적 관리 등 다양한 분야의 지식을 융합하여 개인 맞춤형 치료와 예방적 접근을 제시합니다.\n";
                break;
            default:
                break;
            }
        }
    }

    cout << endl
         << endl
         << endl;

    cout << "------------------------------------------\n";
    cout << "|                   제작                 |\n";
    cout << "|       양은열                  나승빈   |\n";
    cout << "|                                        |\n";
    cout << "|       정다운                 노차소리  |\n";
    cout << "|                                        |\n";
    cout << "-----------------------------------------";
}

int main(void)
{
    int select = 0;
    cout << "안녕하세요! 당신이 가지면 좋을만한 이색 직업을 추천해 드릴게요.\n";
    cout << "질문이 나오면 해당되는 번호를 숫자로 입력해 주세요.\n";

    // question 1
    cout << "질문: 선호하는 일하는 방식은 무엇인가요?\n";
    cout << "1: 팀워크를 중시하는 일.\n2: 독립적으로 일하는 것.\n3: 고객과의 소통이 많은 일.\n4: 창의적인 작업.\n";
    cin >> select;
    if (select == 1)
    {
        job[3]++;
        job[4]++;
        job[7]++;
        job[8]++;
        job[9]++;
        job[14]++;
        job[20]++;
    }
    else if (select == 2)
    {
        job[0]++;
        job[1]++;
        job[5]++;
        job[6]++;
        job[10]++;
        job[11]++;
        job[12]++;
        job[17]++;
        job[18]++;
    }
    else if (select == 3)
    {
        job[2]++;
        job[3]++;
        job[4]++;
        job[7]++;
        job[9]++;
        job[10]++;
        job[12]++;
        job[14]++;
        job[16]++;
        job[19]++;
    }
    else if (select == 4)
    {
        job[1]++;
        job[5]++;
        job[6]++;
        job[8]++;
        job[11]++;
        job[12]++;
        job[13]++;
        job[15]++;
        job[20]++;
        job[21]++;
        job[22]++;
    }

    // question 2
    cout << "질문: 본인은 어떤 성격인가요?\n";
    cout << "1: 외향적이고 사교적인\n2: 내향적이고 신중한\n3: 분석적이고 논리적인\n4: 직관적이고 창의적인\n";
    cin >> select;
    if (select == 1)
    {
        job[2]++;
        job[3]++;
        job[7]++;
        job[9]++;
        job[10]++;
        job[14]++;
        job[16]++;
        job[18]++;
        job[19]++;
    }
    else if (select == 2)
    {
        job[0]++;
        job[5]++;
        job[6]++;
        job[11]++;
        job[12]++;
        job[13]++;
        job[20]++;
    }
    else if (select == 3)
    {
        job[1]++;
        job[2]++;
        job[4]++;
        job[7]++;
        job[9]++;
        job[12]++;
        job[14]++;
        job[18]++;
        job[20]++;
        job[21]++;
        job[22]++;
    }
    else if (select == 4)
    {
        job[1]++;
        job[5]++;
        job[6]++;
        job[8]++;
        job[10]++;
        job[15]++;
        job[17]++;
    }

    // question 3
    cout << "질문: 당신에게 가장 중요한 직업의 가치는 무엇인가요?\n";
    cout << "1: 경제적 보상\n2: 사회적 기여\n3: 개인의 성장\n4: 안정\n";
    cin >> select;
    if (select == 1)
    {
        job[2]++;
        job[3]++;
        job[8]++;
        job[10]++;
        job[11]++;
        job[12]++;
        job[15]++;
        job[17]++;
        job[22]++;
    }
    else if (select == 2)
    {
        job[0]++;
        job[2]++;
        job[3]++;
        job[4]++;
        job[7]++;
        job[8]++;
        job[9]++;
        job[12]++;
        job[16]++;
        job[17]++;
        job[20]++;
        job[22]++;
    }
    else if (select == 3)
    {
        job[1]++;
        job[3]++;
        job[5]++;
        job[6]++;
        job[9]++;
        job[13]++;
        job[14]++;
        job[15]++;
        job[16]++;
        job[18]++;
        job[19]++;
        job[20]++;
        job[21]++;
    }
    else if (select == 4)
    {
        job[0]++;
        job[4]++;
        job[7]++;
        job[10]++;
        job[14]++;
        job[21]++;
    }

    // 최댓값 찾기
    int maxValue = findMaxValue();

    // 결과 출력
    ending(maxValue);

    return 0;
}
