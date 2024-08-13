#ifndef PERSONALITY_H
#define PERSONALITY_H

#include <string>
using namespace std;

class Personality {
protected:
    string extrovert;
    string introvert;
    string think;
    string feel;
    string judge;
    string perceive;
    string sense;
    string intuition;

public:
    Personality(string introvert, string think, string feel, string judge, string perceive, string extrovert,
                string sense, string intuition)
        : introvert(introvert), think(think), feel(feel), judge(judge), perceive(perceive), 
          extrovert(extrovert), sense(sense), intuition(intuition) {
        // Constructor implementation
    }

    string getExtrovert() const {
        return extrovert;
    }
    void setExtrovert(string extrovert) {
        this->extrovert = extrovert;
    }

    string getIntrovert() const {
        return introvert;
    }
    void setIntrovert(string introvert) {
        this->introvert = introvert;
    }

    string getThink() const {
        return think;
    }
    void setThink(string think) {
        this->think = think;
    }

    string getFeel() const {
        return feel;
    }
    void setFeel(string feel) {
        this->feel = feel;
    }

    string getJudge() const {
        return judge;
    }
    void setJudge(string judge) {
        this->judge = judge;
    }

    string getPerceive() const {
        return perceive;
    }
    void setPerceive(string perceive) {
        this->perceive = perceive;
    }

    string getSense() const {
        return sense;
    }
    void setSense(string sense) {
        this->sense = sense;
    }

    string getIntuition() const {
        return intuition;
    }
    void setIntuition(string intuition) {
        this->intuition = intuition;
    }
};

#endif // PERSONALITY_H