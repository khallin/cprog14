#include "game.h"
#include <iostream>

Game::Game()
{
 playing = true;
 pointerMap["grab"] = &Game::pick_up_item;
 pointerMap["move"] = &Game::move;
 pointerMap["use"] = &Game::use;
 pointerMap["help"] = &Game::print_actions;
 pointerMap["quit"] = &Game::quit;
 print_welcome_msg();
}

Game::~Game()
{

}

void Game::invoke(const std::string& name, std::string s) {

  if(pointerMap[name])
    (this->*pointerMap[name])(s);
  else
    std::cout << "You used an illegal action, write help for help with game" << std::endl;
}
    
void Game::print_actions(std::string s) 
  {
    std::cout << "Your aim is to finish the checklist! DO IT! \nmove <room> - insert the room you wish to move \ngrab <item> - insert the item you wish to pick \nuse <item> - instert the item you wish to use" << std::endl;
  }
void Game::pick_up_item(std::string s) 
  {
    std::cout << "You picked up the item: " << s <<std::endl;
  }   
void Game::move(std::string s) 
  {
    std::cout << "You moved to the room: " << s <<std::endl;
  }   
void Game::use(std::string s) 
  {
    std::cout << "You used the item: " << s <<std::endl;
  }  

void Game::print_welcome_msg()
{
   std::cout << "Game is on!" << std::endl;
} 

void Game::save_game()
{
   std::cout << "Saving game..." << std::endl;
} 


void Game::quit(std::string s)
{
   char option;
   std::cout << "Do you want to save your game? (y/n)" << std::endl;
   std::cin >> option;
   if(option == 'y') save_game();
   else if(option != 'n') return;
   playing = false;
} 


