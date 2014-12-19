#include <iostream>
#include "game.cpp"
#include <vector>

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

 	std::string input;
 	std::string object;
 	std::vector<std::string> command;
 	
 	while (game->playing)
 	{
	    while(std::getline(std::cin, input, ' ')) {
	    	command.push_back(input);
	    	for( int i = 0; i != command.size(); ++i )
    		std::cout << command[i] << " ";
    		command.clear();
	    }

	   

	    //gör invoke på move kitchen
	    // game->invoke(action, object);
  		}
 	return 0;
}
