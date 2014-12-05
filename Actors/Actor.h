class Actor
{
	
public:
	Actor();
	~Actor();

	String name(); //returns name of actor
	String type(); // returns the type of actor Human, pet etc.

	String interact(); //What happens when the player interacts with the actor, could be talk to. 
	String give(Item &item); 

};