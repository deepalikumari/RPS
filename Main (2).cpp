#include <string>
#include <cstdlib> 
#include <ctime> 
#include <iostream> 
using namespace std; 

char CompMove() 
{ 
	int mv; 
	srand(time(NULL)); 
	mv = rand() % 3; 

	
  if (mv == 0) { 
		return 'p'; 
	} 
	else if (mv == 1) { 
		return 's'; 
	} 
	return 'r'; 
} 

int Result(char playerMv, char compMV) 
{ 

	if (playerMv == compMV) { 
		return 0; 
	} 
  if (playerMv == 'p' && compMV == 'r') { 
		return 1; 
	} 
	if (playerMv == 'p' && compMV == 's') { 
		return -1; 
	} 
	if (playerMv == 'r' && compMV == 'p') { 
		return -1; 
	}
	if (playerMv == 's' && compMV == 'p') { 
		return 1; 
	} 
	if (playerMv == 's' && compMV == 'r') { 
		return -1; 
	} 
	if (playerMv == 'r' && compMV == 's') { 
		return 1; 
	} 
	
	return 0; 
} 


int main() 
{ 

	char playerMv; 
	cout << "\nEnter r for Rock, p for Paper, and s for Scissor ===> \n\t"; 

	while(1) { 
		cin >> playerMv; 
		if (playerMv == 'p' || playerMv == 'r' || playerMv == 's') { 
			break; 
		} 
		else { 
			cout << "Please Try Again." << endl; 
		} 
	} 

	char compMV = CompMove(); 

	int result = Result(playerMv, compMV); 

	if (result == 0) { 
		cout << "\n\tDraw!\n"; 
	} 
	else if (result == 1) { 
		cout << "\n\tCongratulations! Player won game!\n"; 
	} 
	else { 
		cout << "\n\tComputer won the game!\n"; 
	} 

	cout << "\tPlayer's Move: " << playerMv << endl; 
	cout << "\tComputer's Move: " << compMV << endl; 

	return 0; 
}
