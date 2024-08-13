#include "Personality.h"
#include <iostream>

int main() {
    // ESFJ: Provider
    Personality provider("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                         "extrovert_value", "sense_value", "intuition_value");
    // ESFP: Performer
    Personality performer("", "", "feel_value", "", "perceive_value", "extrovert_value", "sense_value", "");

    // ESTJ: Supervisor
    Personality supervisor("", "think_value", "", "judge_value", "", "extrovert_value", "sense_value", "");

    // ESTP: Dynamo
    Personality dynamo("", "think_value", "", "", "perceive_value", "extrovert_value", "sense_value", "");

    // ISFJ: Protector
    Personality protector("introvert_value", "", "feel_value", "judge_value", "", "", "sense_value", "");

    // ISFP: Composer
    Personality composer("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                         "extrovert_value", "sense_value", "intuition_value");
    // ISTJ: Inspector
    Personality inspector("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                          "extrovert_value", "sense_value", "intuition_value");
    // ISTP: Craftperson
    Personality craftperson("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                            "extrovert_value", "sense_value", "intuition_value");
    // ENFP: Champion
    Personality champion("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                         "extrovert_value", "sense_value", "intuition_value");
    // ENTJ: Commander
    Personality commander("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                          "extrovert_value", "sense_value", "intuition_value");
    // ENTP: Visionary
    Personality visionary("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                          "extrovert_value", "sense_value", "intuition_value");
    // ENFJ: Teacher
    Personality teacher("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                        "extrovert_value", "sense_value", "intuition_value");
    // INFP: Healer
    Personality healer("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                       "extrovert_value", "sense_value", "intuition_value");
    // INTJ: Mastermind
    Personality mastermind("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                           "extrovert_value", "sense_value", "intuition_value");
    // INFJ: Counselor
    Personality counselor("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                          "extrovert_value", "sense_value", "intuition_value");
    // INTP: Architect
    Personality architect("introvert_value", "think_value", "feel_value", "judge_value", "perceive_value", 
                          "extrovert_value", "sense_value", "intuition_value");


    cout << "Provider Extrovert: " << provider.getExtrovert() << endl;
    cout << "Performer Feel: " << performer.getFeel() << endl;

    return 0;
}