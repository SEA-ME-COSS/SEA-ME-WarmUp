#include <iostream>
#include <cstring>
#include "case_converter.h"

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <up|down> <'string to convert'>" << std::endl;
        return 1;
    }

    // 여기서 action이란 무엇인가. 그냥 변수를 선언하고 해당 변수에다가 =로 집어넣을 수 있었던것 아닌가?
    std::string action(argv[1]);
    std::string input;

    // input에 argv를 넣을때 꼭 loop를 돌려야 할까? 그런거 말고 argv의 특정 위치 이후의 값을 한꺼번에 input에 복사하는 방법은 없을까?
    for (int i = 2; i < argc; ++i) {
        if (i > 2)
            input += " ";
        input += argv[i];
    }

    // 왜 에러코드의 return은 1이고 정상처리 코드의 return은 0인가?
    if (action == "up") {
        std::cout << CaseConverter::toUpperCase(input) << std::endl;
    } else if (action == "down") {
        std::cout << CaseConverter::toLowerCase(input) << std::endl;
    } else {
        std::cerr << "Unknown action: " << action << ". Please choose 'up' or 'down'." << std::endl;
        return 1;
    }

    return 0;
}
