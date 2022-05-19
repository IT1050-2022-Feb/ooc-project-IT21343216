#include<iostream>
#include<cstring>
#define size 2

using namespace std;


class Favorite {
private:
	int FavoriteID;
	Apartment* apart[size];
public:
	Favorite();//default constructor
	Favorite(int Fav_id);
	void addFavorite(Apartment* apart1, Apartment *apart2);
	void displayFavDetails();
	~Favorite();
};

