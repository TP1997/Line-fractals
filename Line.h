#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <vector>
class Line{
protected:
    float sp[2];
    float ep[2];
public:
    float length;
    Line(float sx, float sy, float ex, float ey);
    virtual ~Line();
    void draw(sf::RenderWindow &window, sf::Color color=sf::Color::White);
    void drawPart(sf::RenderWindow &window, float amount, sf::Color color=sf::Color::White);
    virtual std::vector<Line*> generate(bool opposite)=0;
};
class kochLine : public Line{
public:
    kochLine(float sx, float sy, float ex, float ey);
    ~kochLine();
    std::vector<Line*> generate(bool opposite);
};
class sierpinskiLine : public Line{
public:
    sierpinskiLine(float sx, float sy, float ex, float ey);
    ~sierpinskiLine();
    std::vector<Line*> generate(bool opposite);
};
class hilbertLine : public Line{
public:
    hilbertLine(float sx, float sy, float ex, float ey);
    ~hilbertLine();
    std::vector<Line*> generate(bool opposite);
};
class dragonLine : public Line{
public:
    dragonLine(float sx, float sy, float ex, float ey);
    ~dragonLine();
    std::vector<Line*> generate(bool opposite);
};


#endif // LINE_H_INCLUDED
