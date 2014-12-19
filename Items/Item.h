class Item
{							
public:
	String name;
	String[] compatible_with; // A list of items this item can be used on
	//A map of string with items that can be used with this item
	String[] reponses; 	// First message if used alone, and following are message when
							// used on the items in the list above
					
	Item(arguments); //arguments can be name, stuff it can be used with, and it's used messages?
	~Item();

	String name(); 				// Should have getname function, or is it more javacode?
	// bool canUseOn(Item &item) = 0;	// Check what the item can be used on by looking through the list usedOn. If item can't be used on 
								// the next item, a generic message will be provided by game. "Item: grapefruit, can't be 
								// 																used on: tv"
	
	//bool canUseOn(Actor &Actor) = 0;// Check here, or should each actor say what items can be used on them? Actor can eat grapefruit, 
								// Mailman will give you post, you can give key to neighbor etc. 
	
	String send_response() = 0;	// Get message from use i.e. the game says "The item: grapefruit, was used on: stove". 
								// Usedmessage said "You threw a grapefruit at the stove. The stove is now covered in grapefruit."
};