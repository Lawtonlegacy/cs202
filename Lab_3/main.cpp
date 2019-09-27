#include "Classes.h"
using std::string;
using std::unique_ptr;
using std::shared_ptr;
using std::make_shared;
using std::make_unique;



int main() {
	
	//Part 1 doesn't get removed unless delete is called.
	std::cout << "Creating a raw pointer.\n\n";
	Player *ptrToPlayer = new(Player);

	//Part 2 Create a unique_ptr and use other consturctor with param
	string nameforExtra = "Ham";
	std::cout << "Creating a unique_ptr.\n\n";
	auto uniPtr = make_unique<Player>(nameforExtra);
	//unique_ptr<Player> uniPlayer(new Player(nameforExtra));

	//Part 3 Transfer ownership to another unique_ptr
	std::cout << "Transferring ownership to a new unique_ptr.\n\n";
	auto uniPtr2 = std::move(uniPtr);
	//unique_ptr<Player> uniPlayer2 = std::move(uniPlayer);

	//Part 4 calling member function through unique_ptr
	std::cout << "Calling a member funciton.\n\n";
	std::cout << uniPtr2->getName() << "\n";

	//Part 5 & 6
	std::cout << "Creating shared_ptr.\n\n";
	auto sharePtr = make_shared<Player>();
	std::cout << "Creating a shared_ptr to the same object.\n\n";
	auto sharePtr2 = sharePtr;

	std::cout << "Deleting Raw Pointer.\n\n";
	delete(ptrToPlayer); // Need to give back the memory from raw pointer

    return 0;
}