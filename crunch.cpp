#include <iostream>
#include "game.cpp"

int main(int argc, char const *argv[])
{
	std::cout << "Hello" << std::endl;	
	std::cout << "1. New Game" << std::endl;	
	std::cout << "2. Load Game" << std::endl;
	int choice;
	std::cin >> choice;
	Game *game;
	switch(choice)
	{
		case 1:
			// Start new game
			game = new Game();
			break;

		case 2:
			// Load game from file
			// game = new Game("file contents");
			break;
	}

 	std::string action;
 	std::string object;
 	
 	int i =1;
 	while (game->playing)
 	{
	    //Läs in command 'move kitchen' t.ex.
	    std::cin >> action;
	    if (action!="help" && action!="print_task" && action!="quit")
	     	std::cin >> object;

	    //gör invoke på move kitchen
	    game->invoke(action, object);
	    i++;
  		}
 	return 0;
}
