#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

int calcTotalMarks(std::vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(std::pair<std::string, std::vector<int>> s1, std::pair<std::string, std::vector<int>> s2)
{
    std::vector<int> marks1 = s1.second;
    std::vector<int> marks2 = s2.second;
    return calcTotalMarks(marks1) > calcTotalMarks(marks2);
}

int main()
{
    std::vector<std::pair<std::string, std::vector<int>>> student_marks = {
        {"Kate", {11,20,30}},
        {"Stacy",{11,40,30}},
        {"Johnny",{11,20,70}},
        {"Tot",{11,50,30}},
    };

    std::sort(student_marks.begin(), student_marks.end(), compare);

    for(auto s : student_marks){
        std::cout << s.first << ": " << calcTotalMarks(s.second) << std::endl;
    }
}
