#include <iostream>
#include <string>
using namespace std;

const int xSize=10;
const int ySize=10;

class Ship{
	public:  
		//---Attributes--
		int length;
		bool isSunk;
		int numberOfHits;
		bool isHorizontal;
		int x;
		int y;
		//---Operations--
};

class Carrier :public Ship{
	public:
	
};

class Player{
	public:
		//--Atributes--
		string name;
		int index;
		
		//--Operetations
		void playerInit(int IndexTemp){
			index=IndexTemp;
			cout<<"Insert name for Player "<<index<<":"<<endl;
			cin>>name;
		}
		
		
		void placeShips(){
			Carrier carrier;
			Board board;
			cout<<name<<" is placing ships."<<endl;
			cout<<"You can have one Carrier.Incert X,Y Coordinates and 0 for horizontal,1 for vertical(X,Y,Z):";
			cin>>carrier.x>>carrier.y>>carrier.isHorizontal;
			board.print(Player);
		}
		
		void fire(){
			cout<<"Choose block to place attack:"<<endl;
			//code for fire goes here
		}
		
		void playCard(){
			cout<<"Select card to play:"<<endl;
			//code for card play goes here
		}
			
};

class Board{
	public:
		//--Attributes--
		char grid[xSize][ySize];
		
		//--Operations--
		void initialize(Player player){
			for(int i=0;i<ySize;i++){
				for(int j=0;j<xSize;j++){
					grid[j][i]='-';
				}
			}
			print(player);
		};
		
		void print(Player player){
			cout<<"Board for "<<player.name<<" is:"<<endl;
			for(int i=0;i<ySize;i++){
				for(int j=0;j<xSize;j++){
					cout<<grid[j][i]<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
};

class round(){
	
}


int main(){
	Board board1,board2;
	Player player1,player2;
	
	
	player1.playerInit(1);
	player2.playerInit(2);
	
	board1.initialize(player1);
	board2.initialize(player2);
	
	player1.placeShips();
	player2.placeShips();
	

	
	
	
	
	
	
	
}


		
	
