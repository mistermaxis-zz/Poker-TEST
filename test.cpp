#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class Card {
  public:
    unsigned int card;
    Card() { srand(time(nullptr)); card = rand % 52; }
};
class IDealable {
public:
    virtual void Deal(Card c) = 0;  
};
class Dealable:IDealable {
private:
    Card card;
public:
    virtual void Deal(Card c) card(c) {  }
};
class Table:Dealable {
    
};
class Player:Dealable {
    
};
class Dealer {
  public:
    void Deal(Dealable d) { Card c; d.Deal(c); }
};

int main()
{
    std::vector<std::string> vec { "first" , "second", "third" }; 
    std::cout << vec[0];
    return 0;
}
