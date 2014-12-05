#include "Items/*"

class Task
{
public:
	Task(String, String, Environment, ArrayList<Item>);
	~Task();

	int priority; // Är den const? Eller kan den ändras? Hur funkar relationen? prioritetslista istället för värde lagrat i item-objectet?
	const String instruction, list_label;
	const ArrayList<Item> related_items;
	const Environment location;
};