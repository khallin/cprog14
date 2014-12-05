#include <map>
#include <string>
#include <sstream>
#include <iostream>
class Game
{
  public:
    bool playing;
     Game();
     ~Game();
     void invoke(const std::string&, std::string);

  private:
    std::map<std::string, void (Game::*)(std::string)> pointerMap;

    void print_welcome_msg();
    void print_actions(std::string);   
    void pick_up_item(std::string);  
    void move(std::string);   
    void use(std::string);  
    void quit(std::string);
    void save_game();

    // void search_room(std::string);
    // void search_furniture(std::string);
};

