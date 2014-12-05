#include <map>
#include <string>
#include <sstream>
#include <iostream>
class Game
{
public:
     Game()
     {
       pointerMap["grab"] = &Game::pick_up_item;
       pointerMap["move"] = &Game::move;
       pointerMap["use"] = &Game::use;
       pointerMap["help"] = &Game::print_actions;
     }

     void invoke(const std::string& name, std::string s) {
  
       	if(pointerMap[name])
         	(this->*pointerMap[name])(s);
     	else
     		std::cout << "You used an illegal action, write help for help with game" << std::endl;
     }
     

private:
	std::map<std::string, void (Game::*)(std::string)> pointerMap;
	 
	void print_actions(std::string s) 
	{
   	std::cout << "Your aim is to finish the checklist! DO IT! \nmove <room> - insert the room you wish to move \ngrab <item> - insert the item you wish to pick \nuse <item> - instert the item you wish to use" << std::endl;
  };

  void pick_up_item(std::string s) 
  {
   	std::cout << "You picked up the item: " << s <<std::endl;
  };

  void move(std::string s) 
  {
   	std::cout << "You moved to the room: " << s <<std::endl;
  };

  void use(std::string s) 
  {
   	std::cout << "You used the item: " << s <<std::endl;
  };

     
};

int main () {
  Game o;
  std::string input;
  std::string action;
  std::string object;
  int i =1;
  while (i<4)
  {
    //Läs in command 'move kitchen' t.ex.
    std::cin >> action;
    if (action!="help" && action!="print_task")
      std::cin >> object;
    //gör invoke på move kitchen
    o.invoke(action, object);
    i++;
  }
 
}