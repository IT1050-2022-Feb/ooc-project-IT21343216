#include<iostream>
#include<cstring>
#include "Favorite.h"
using namespace std;


Favorite::Favorite()
{
	cout << "This is the Favorite constructor" << endl;
}
Favorite::Favorite(int Fav_id)
{
	FavoriteID = Fav_id;
}
void Favorite::addFavorite(Apartment* apart1,  Apartment *apart2)
{
	apart[0] = apart1;
	apart[1] = apart2;
}
void Favorite::displayFavDetails()
{
	for(int i=0;i<size;i++)
	{
		apart[i]->displayApartment();
	}
}
Favorite::~Favorite()
{
	cout << "Deleting Favorite " << FavoriteID << endl;
}
